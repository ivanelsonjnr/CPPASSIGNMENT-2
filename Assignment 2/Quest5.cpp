#include <iostream>
using namespace std;
int main() {
    int choice;
    double value, result;
    cout << "Unit Conversion Menu" << endl;
    cout << "1. Convert volts to millivolts" << endl;
    cout << "2. Convert amperes to milliamperes" << endl;
    cout << "3. Convert kilowatts to watts" << endl;
    cout << "4. Convert ohms to kilo-ohms" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Enter value: ";
    cin >> value;

    switch (choice) {
        case 1:
            result = value * 1000;
            cout << value << " V = " << result << " mV" << endl;
            break;
        case 2:
            result = value * 1000;
            cout << value << " A = " << result << " mA" << endl;
            break;
        case 3:
            result = value * 1000;
            cout << value << " kW = " << result << " W" << endl;
            break;
        case 4:
            result = value / 1000;
            cout << value << " Ohms = " << result << " kOhms" << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }
    return 0;
}

