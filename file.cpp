#include <iostream>
#include <iomanip>

using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0/5.0) + 32;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0/9.0;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5.0/9.0;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return (kelvin * 9.0/5.0) - 459.67;
}

void convertTemperature(double value, char unit) {
    double celsius, fahrenheit, kelvin;

    switch (unit) {
        case 'C':
            celsius = value;
            fahrenheit = celsiusToFahrenheit(celsius);
            kelvin = celsiusToKelvin(celsius);
            break;
        case 'F':
            fahrenheit = value;
            celsius = fahrenheitToCelsius(fahrenheit);
            kelvin = fahrenheitToKelvin(fahrenheit);
            break;
        case 'K':
            kelvin = value;
            celsius = kelvinToCelsius(kelvin);
            fahrenheit = kelvinToFahrenheit(kelvin);
            break;
        default:
            cout << "Invalid unit entered." << endl;
            return;
    }

    cout << fixed << setprecision(2);
    cout << "\nTemperature conversions from " << value << " " << unit << ":" << endl;
    cout << "Celsius: " << celsius << " C" << endl;
    cout << "Fahrenheit: " << fahrenheit << " F" << endl;
    cout << "Kelvin: " << kelvin << " K" << endl;
}

int main() {
    double value;
    char unit;

    cout << "Enter the temperature value: ";
    cin >> value;
    cout << "Enter the unit of temperature (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;
    unit = toupper(unit);

    convertTemperature(value, unit);

    return 0;
}
