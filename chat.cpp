#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename = "example.txt"; // File name
    int targetLineNumber;

    // Ask the user for the line number to search
    cout << "Enter the line number you want to find: ";
    cin >> targetLineNumber;

    ifstream file(filename); // Open the file for reading

    if (!file.is_open()) {
        cerr << "Error: Could not open the file!" << endl;
        return 1;
    }

    string line;
    int currentLineNumber = 0;

    // Read the file line by line
    while (getline(file, line)) {
        currentLineNumber++;
        if (currentLineNumber == targetLineNumber) {
            cout << "Line " << targetLineNumber << ": " << line << endl;
            file.close();
            return 0;
        }
    }

    // If the line number is not found
    cout << "Error: Line number " << targetLineNumber << " does not exist in the file." << endl;
    file.close();
    return 0;
}
