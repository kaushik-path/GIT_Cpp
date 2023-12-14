#include <iostream>
#include <string>
using namespace

void countCharactersWordsLines(string input) {
    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;

    std::string word;

    for (char ch : input) {
        // Count characters
        charCount++;

        // Check for space to detect words
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            if (!word.empty()) {
                wordCount++;
                word.clear();
            }
        } else {
            // Build words character by character
            word += ch;
        }

        // Count lines
        if (ch == '\n') {
            lineCount++;
        }
    }

    // If the last word is not followed by a space, count it
    if (!word.empty()) {
        wordCount++;
    }

    // Display the counts
    cout<< "Number of characters: " << charCount <<endl;
    cout<< "Number of words: " << wordCount <<endl;
    cout<< "Number of lines: " << lineCount <<endl;
}

int main() {
    // Get input string from the user
    cout << "Enter a string (press Enter twice to finish input):\n";

    // Read input until an empty line is entered
    string input;
    string line;
    while   (getline   cin, line) && !line.empty() {
        input += line + '\n';
    }

    // Call the function to count characters, words, and lines
    countCharactersWordsLines(input);

    return 0;
}
