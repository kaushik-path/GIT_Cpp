/*
Problem Statement
You are dveloping a letter game scoring system that assigns scores based on uppercase and lowercase letters. In this game, players enter four letters, and for each
uppercase letter, they earn IO marks, while for each lowercase letter, they lose 5 marks.
Your task is to calculate the total score for the given letters entered by the player.
Write a program to calculate the total score. Create a base class Base with the virtual method game(). Define this method in the Derived class
Derive and calculate the
total score.
Note: This question helps in clearing Wipro tests.
Input format :
The input consists of four characters separated by a space.
Output format :
The output prints the total score.
*/
#include<iostream>
#include<string>

class Base {
public:
    virtual int game(std::string letters) = 0; 
};

class Derive : public Base {
public:
    int game(std::string letters) override { 
        int score = 0;
        for (char& c : letters) {
            if (isupper(c)) score += 10;
            else if (islower(c)) score -= 5;
        }
        return score;
    }
};

int main() {
    Derive d;
    std::string letters;
    std::getline(std::cin, letters);
    std::cout << "Score : " << d.game(letters) << std::endl; // Use of 'game()' function
    return 0;
}

/*
Input 1 :
A F K R
Output 1 :
Score : 40
*/