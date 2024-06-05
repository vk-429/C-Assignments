#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> studentScores;

    // Adding students and their scores to the map
    studentScores["Alice"] = 90;
    studentScores["Bob"] = 85;
    studentScores["Charlie"] = 92;
    studentScores["Dave"] = 88;

    // Retrieving a score using a student's name
    std::string studentName;
    std::cout << "Enter a student's name: ";
    std::cin >> studentName;

    // Checking if the student is present in the map
    auto it = studentScores.find(studentName);
    if (it != studentScores.end()) {
        std::cout << "Score for " << studentName << ": " << it->second << std::endl;
    } else {
        std::cout << "Student not found." << std::endl;
    }

    return 0;
}
