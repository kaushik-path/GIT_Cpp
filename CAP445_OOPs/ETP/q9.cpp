// 09 Write a C++ program to check if a given stnng is a palindrome (reads the same forwards and
// backwards.
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const std::string& str) {
    // Remove spaces and convert to lowercase for case-insensitive comparison
    string cleanedStr;
    for (char ch : str) {
        if (!(ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r' || ch == '\f' || ch == '\v')) {
            cleanedStr.push_back(tolower(ch));
        }
    }

    // Compare original and reversed strings
    string reversedStr(cleanedStr.rbegin(), cleanedStr.rend());
    return cleanedStr == reversedStr;
}

int main() {
    string inputString;

    // Get input from the user
    cout << "Enter a string: ";
    getline(std::cin, inputString);

    // Check if the string is a palindrome
    if (isPalindrome(inputString)) {
        cout << "The entered string is a palindrome." << endl;
    } else {
        cout << "The entered string is not a palindrome." << endl;
    }

    return 0;
}
