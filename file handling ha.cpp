#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string fileName, searchText;

    std::cout << "na1c1.txt";
//    std::cin >> fileName;
    std::cin.ignore(); // Clear the newline character

    std::cout << "Enter text to search: ";
    std::getline(std::cin, searchText);

    std::ifstream file("na1c1.txt");
    if (!file) {
        std::cerr << "Error: Could not open file." << std::endl;
        return 1;
    }

    std::string line;
    int lineNumber = 0;
    while (std::getline(file, line)) {
        lineNumber++;
        if (line.find(searchText) != std::string::npos) {
            std::cout << "Found: \"" << searchText << "\" at line " << lineNumber << "." << std::endl;
            file.close();
            return 0;
        }
    }

    std::cout << "The text \"" << searchText << "\" was not found in the file." << std::endl;
    file.close();
    return 0;
}
