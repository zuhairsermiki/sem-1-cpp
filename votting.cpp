#include <iostream>
#include <fstream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Function prototypes
void registerUser(const string& username, const string& password);
bool authenticateUser(const string& username, const string& password);
void registerCandidate(const string& candidateName);
void castVote(const string& username, const string& candidateName);
void showResults();
bool isCandidateValid(const string& candidateName);
string hashPassword(const string& password);

// File paths
const string USERS_FILE = "users.txt";
const string CANDIDATES_FILE = "candidates.txt";
const string VOTES_FILE = "votes.txt";

int main() {
    int choice;
    string username, password, candidateName;

    while (true) {
        cout << "\n--- Voting System ---\n";
        cout << "1. Register User\n";
        cout << "2. Authenticate User\n";
        cout << "3. Register Candidate\n";
        cout << "4. Cast Vote\n";
        cout << "5. Show Results\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter username: ";
                cin >> username;
                cout << "Enter password: ";
                cin >> password;
                registerUser(username, password);
                break;
            case 2:
                cout << "Enter username: ";
                cin >> username;
                cout << "Enter password: ";
                cin >> password;
                if (authenticateUser(username, password)) {
                    cout << "Authenticated successfully!\n";
                } else {
                    cout << "Authentication failed!\n";
                }
                break;
            case 3:
                cout << "Enter candidate name: ";
                cin.ignore();
                getline(cin, candidateName);
                registerCandidate(candidateName);
                break;
            case 4:
                cout << "Enter username: ";
                cin >> username;
                cout << "Enter candidate name: ";
                cin.ignore();
                getline(cin, candidateName);
                castVote(username, candidateName);
                break;
            case 5:
                showResults();
                break;
            case 6:
                cout << "Exiting system. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}

void registerUser(const string& username, const string& password) {
    // Ensure username and password are valid
    if (username.empty() || password.empty()) {
        cout << "Username and password cannot be empty!\n";
        return;
    }

    ofstream file(USERS_FILE, ios::app);
    if (!file) {
        cerr << "Error opening users file.\n";
        return;
    }
    file << username << " " << hashPassword(password) << endl;
    file.close();
    cout << "User registered successfully!\n";
}

bool authenticateUser(const string& username, const string& password) {
    ifstream file(USERS_FILE);
    if (!file) {
        cerr << "Error opening users file.\n";
        return false;
    }
    string u, p;
    string hashedPassword = hashPassword(password);
    while (file >> u >> p) {
        if (u == username && p == hashedPassword) {
            file.close();
            return true;
        }
    }
    file.close();
    return false;
}

void registerCandidate(const string& candidateName) {
    if (candidateName.empty()) {
        cout << "Candidate name cannot be empty!\n";
        return;
    }

    if (isCandidateValid(candidateName)) {
        cout << "Candidate already exists!\n";
        return;
    }

    ofstream file(CANDIDATES_FILE, ios::app);
    if (!file) {
        cerr << "Error opening candidates file.\n";
        return;
    }
    file << candidateName << endl;
    file.close();
    cout << "Candidate registered successfully!\n";
}

void castVote(const string& username, const string& candidateName) {
    if (!isCandidateValid(candidateName)) {
        cout << "Invalid candidate name. Please check the list of candidates.\n";
        return;
    }

    ifstream votesFile(VOTES_FILE);
    if (!votesFile) {
        cerr << "Error opening votes file.\n";
        return;
    }
    string u, c;
    while (votesFile >> u >> c) {
        if (u == username) {
            cout << "User has already voted!\n";
            votesFile.close();
            return;
        }
    }
    votesFile.close();

    ofstream file(VOTES_FILE, ios::app);
    if (!file) {
        cerr << "Error opening votes file.\n";
        return;
    }
    file << username << " " << candidateName << endl;
    file.close();
    cout << "Vote casted successfully!\n";
}

void showResults() {
    ifstream file(VOTES_FILE);
    if (!file) {
        cerr << "Error opening votes file.\n";
        return;
    }

    unordered_map<string, int> voteCount;
    string username, candidateName;

    while (file >> username >> candidateName) {
        voteCount[candidateName]++;
    }
    file.close();

    cout << "Vote Results:\n";
    for (const auto& pair : voteCount) {
        cout << pair.first << ": " << pair.second << " votes\n";
    }
}

bool isCandidateValid(const string& candidateName) {
    ifstream file(CANDIDATES_FILE);
    if (!file) {
        cerr << "Error opening candidates file.\n";
        return false;
    }
    string candidate;
    while (getline(file, candidate)) {
        if (candidate == candidateName) {
            file.close();
            return true;
        }
    }
    file.close();
    return false;
}

string hashPassword(const string& password) {
    hash<string> hasher;
    return to_string(hasher(password));
}
