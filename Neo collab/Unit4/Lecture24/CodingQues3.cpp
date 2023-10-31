/*
Meetha is developing a program to analyze a set of numerical
data and calculate the standard deviation of the dataset. She
wants to create a Statistics class that can handle both basic
types (such as int, double, etc.) and class types. The program
should allow users to input the data, perform the standard
deviation calculation, and output the result. Meetha needs to
make sure the program handles both basic types and class
types.
The program should then calculate and display the standard
deviation of the dataset by performing the necessary type
conversions and calculations.
Input format :
The first line of input contains an integer, which represents the size
of the data set.
The second line of input contains the values for each index in the
data set.
Output format :
The output displays the standard deviation of the data set,
rounded off to two decimal places.
*/
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

template <typename T>
class Statistics {
private:
    std::vector<T> data;

public:
    // Function to set the dataset
    void setData(const std::vector<T>& dataset) {
        data = dataset;
    }

    // Function to calculate standard deviation
    double calculateStandardDeviation() const {
        if (data.empty()) {
            return 0.0;
        }

        // Calculate mean
        double sum = 0.0;
        for (const T& value : data) {
            sum += static_cast<double>(value);
        }
        double mean = sum / data.size();

        // Calculate variance
        double variance = 0.0;
        for (const T& value : data) {
            variance += pow(static_cast<double>(value) - mean, 2);
        }
        variance /= data.size();

        // Calculate standard deviation
        return sqrt(variance);
    }

    // Conversion operator to calculate standard deviation when cast to double
    operator double() const {
        return calculateStandardDeviation();
    }
};

int main() {
    int size;
    std::cin >> size;

    // Read data of type 'T' into vector
    std::vector<double> dataset; // Example: Using double as the data type
    double value;
    for (int i = 0; i < size; ++i) {
        std::cin >> value;
        dataset.push_back(value);
    }

    // Create Statistics object and set the dataset
    Statistics<double> stats;
    stats.setData(dataset);

    // Calculate standard deviation and assign it to a variable in a single line
    double standardDeviation = stats; // This line calculates the standard deviation using the conversion operator

    std::cout << std::fixed << std::setprecision(2) << standardDeviation << std::endl;

    return 0;
}
/*
Input 1 :
5
10 20 30 40 50
Output 1 :
14.14
*/
