/*
Problem Statement
Meenu is working on a project that involves predicting population growth in a city. You have historical data on population growth rates, and you want to use Euler's
method for population approximation to estimate the future population at a specific time.
Write a program that takes the following inputs from the user:
• Initial time (to)
• Current population
• Growth rate
• Time step size (h)
• Target time (t)
The program should use the PopulationApproximation class to perform population growth calculations using Euler's method. The ApproximatePopulation class should
be used to store and represent the approximate population at the target time. Additionally, the TimeRange class should be used to store the initial time (to) and target
time (t).
After calculating the approximate population, the program should output the result in the following format:
"Approximate population at time [target time] is [approximate population]."
In this scenario, the basic type-to-class type conversion Approximatepopulation approxPopObj(approximatePopuIation) occurs when initializing the
Approximatepopulation object with the approximatepopulation value obtained from Euler's method calculation. The ApproximatePopulation class encapsulates the
approximate population value and allows for customized printing using the overloaded operator.

Input format :
The first line of input contains the initial time (to) as a floating-point number.
The second line of input contains the initial population at time to as a floating-point number.
The third line of input contains the growth rate as a floating-point number.
The next line of input contains the time step size (h) as a floating-point number.
The last line of input contains the desired time for population approximation (t) as a floating-point number.
Output format :
The output displays a single line containing the approximate population at the target time, printed with four decimal places.
*/
#include <iostream>
#include <iomanip>

class PopulationApproximation {
public:
    static double calculateApproximatePopulation(double initialTime, double initialPopulation, double growthRate, double timeStepSize, double targetTime) {
        double currentTime = initialTime;
        double currentPopulation = initialPopulation;

        while (currentTime < targetTime) {
            double populationChange = growthRate * currentPopulation * timeStepSize;
            currentPopulation += populationChange;
            currentTime += timeStepSize;
        }

        return currentPopulation;
    }
};

class ApproximatePopulation {
private:
    double value;

public:
    ApproximatePopulation(double population) : value(population) {}

    friend std::ostream& operator<<(std::ostream& os, const ApproximatePopulation& obj) {
        os << std::fixed << std::setprecision(4) << obj.value;
        return os;
    }
};

class TimeRange {
public:
    double initialTime;
    double targetTime;

    TimeRange(double initial, double target) : initialTime(initial), targetTime(target) {}
};

int main() {
    double initialTime, initialPopulation, growthRate, timeStepSize, targetTime;

    // Read input values
    std::cin >> initialTime >> initialPopulation >> growthRate >> timeStepSize >> targetTime;

    // Calculate approximate population using Euler's method
    double approximatePopulation = PopulationApproximation::calculateApproximatePopulation(initialTime, initialPopulation, growthRate, timeStepSize, targetTime);

    // Create ApproximatePopulation object for customized printing
    ApproximatePopulation approxPopObj(approximatePopulation);

    // Output the approximate population at the target time
    std::cout << "Approximate population: " << approxPopObj << " at time " << std::fixed << std::setprecision(2) << targetTime << std::endl;

    return 0;
}
/*
Input 1 :
0
1000
0.025
2
10
Output 1 :
Approximate population: 632.0000 at time 10.00
*/