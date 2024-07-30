/**
 *Temp-Convertor.cpp
 *
 * Author: Jamal Hamid (c3508783)
 * Date: 30 07 2024
 *
 * This file implements is a temp converting program that converts f to c
 */

#include <iostream> // For std::cout
#include <iomanip>  // For std::setw (Set width)

// Allowing the removely of std
using namespace std;

// Driver code
int main() {
    // Defining variables for the range for Celsius temperatures
    const int startCelsius = -40;
    const int endCelsius = 40;
    const int step = 1; // Step size for incrementing temperatures

    // Print table headers on the console
    cout << setw(10) << "Celsius" << " | " << setw(10) << "Fahrenheit" << endl;
    cout << "-----------------------------" << endl;

    // Loop through the range of Celsius temperatures
    for (int celsius = startCelsius; celsius <= endCelsius; celsius += step) {
        // Convert Celsius to Fahrenheit
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

        // Print the temperatures side by side
        cout << setw(10) << celsius << " | " << setw(10) << fixed << setprecision(1) << fahrenheit << endl;
    }

    return 0;
}
