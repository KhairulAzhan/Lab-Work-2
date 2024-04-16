#include <iostream>
using namespace std;

// Function prototypes
double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);

int main() {
    double temperature;
    char scale;

    cout << "Enter temperature: "; 
    cin >> temperature;

    cout << "Enter scale (C for Celsius, F for Fahrenheit): "; 
    cin >> scale;

    if (scale == 'C' || scale == 'c') { // Corrected syntax
        double convertedTemp = celsiusToFahrenheit(temperature); // Using the correct function name
        cout << "Converted temperature: " << convertedTemp << "F" << endl;
    }
    else if (scale == 'F' || scale == 'f') { // Corrected syntax
        double convertedTemp = fahrenheitToCelsius(temperature); 
        cout << "Converted temperature: " << convertedTemp << "C" << endl; 
    }
    else {
        
    }

    return 0;
}

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}
