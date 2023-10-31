/*
Problem Statement
Let's say Prakash is developing a reservation system for a hotel, and you need to validate the check-in dates entered by users. Make sure that the date entered by the
user is in a valid format (YYYYMMDD) and falls within the acceptable range. It then checks if the entered date is valid or not based on certain conditions, such as leap
years and the number of days in each month.
If the entered date is valid, you can proceed with the reservation process and display the check-in date. However, if the date is invalid (e.g., if the month is greater than 12
or the day is greater than the maximum allowed for that month), you can prompt the user to enter a valid date and prevent any further processing until a valid date is
provided.
The program should demonstrate the use of basic type to class type conversion by converting the extracted day, month, and year into instances of the Date class Date
date(day, month, year). It should also include robust validation logic to ensure that the entered date is valid based on the rules of the Gregorian calendar, accounting
for leap years and month-specific days.
Note: This kind of question will help in clearing Wipro recruitment.
Input format :
The input contains an integer, which represents a date in the format YYYYMMDD.
Output format :
The output follows the below-given conditions:
If the input date is valid, display the date in the format DD/MM/YYYY.
If the input date is not valid, display the error message "Invalid date entered."
*/
#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int day, month, year;
    string smonth;

public:
    Date(int d, int m, int y,string s) : day(d), month(m), year(y),smonth(s) {}

    bool isValidDate() {
        if (year < 1 || month < 1 || month > 12 || day < 1) {
            return false;
        }

        int maxDays = 31;
        if (month == 4 || month == 6 || month == 9 || month == 11) {
            maxDays = 30;
        } else if (month == 2) {
            maxDays = 28;
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                maxDays = 29; // Leap year
            }
        }

        return day <= maxDays;
    }

    void displayDate() {
        if (isValidDate()) {
            cout << "Date: " << day << '/' << smonth << '/' << year << endl;
        } else {
            cout << "Invalid date entered." << endl;
        }
    }
};

int main() {
    string dateStr;
    cin >> dateStr;

    if (dateStr.size() != 8) {
        cout << "Invalid date entered." << endl;
        return 0;
    }

    int year = stoi(dateStr.substr(0, 4));
    int month = stoi(dateStr.substr(4, 2));
    string smonth = dateStr.substr(4, 2);
    int day = stoi(dateStr.substr(6, 2));

    Date date(day, month, year,smonth);
    date.displayDate();

    return 0;
}
/*
Input 1 :
20001013
Output 1 :
Date: 13/10/2000
*/