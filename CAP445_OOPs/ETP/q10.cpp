// Write a C++ program that reads a file and handles exceptions for flie tnputioutput errors.
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename;

    // Get the file name from the user
    std::cout << "Enter the file name: ";
    std::cin >> filename;

    try {
        // Open the file for reading
        std::ifstream inputFile(filename);

        // Check if the file is successfully opened
        if (!inputFile.is_open()) {
            // If not, throw an exception
            throw std::ios_base::failure("Error opening file.");
        }

        // Read and print the content of the file
        std::cout << "File content:\n";
        char ch;
        while (inputFile.get(ch)) {
            std::cout << ch;
        }

        // Close the file
        inputFile.close();
    } catch (const std::ios_base::failure& e) {
        // Handle the exception for file input/output errors
        std::cerr << "Exception: " << e.what() << std::endl;
        std::cerr << "Error reading or opening the file." << std::endl;
        return 1;  // Return a non-zero value to indicate an error
    }

    return 0;
}
