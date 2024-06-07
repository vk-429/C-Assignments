#include <iostream>
#include <fstream>

int main() {
    std::string fileName;

    std::cout << "Enter the file name: ";
    std::cin >> fileName;

    // Open the file
    std::ifstream file(fileName);

    // Check if the file was successfully opened
    if (!file) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }

    // Read and process the file data
    std::string line;
    while (std::getline(file, line)) {
        // Process each line of the file
        std::cout << line << std::endl;
    }

    // Close the file
    file.close();

    return 0;
}
