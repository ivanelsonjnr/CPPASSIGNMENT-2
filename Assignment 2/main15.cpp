C++ Programme
#include <iostream>
using namespace std;

int main() {
    double voltage, current, resistance;
    char again;
    do {
        cout << "Enter voltage (V): "; cin >> voltage;
        cout << "Enter current (A): "; cin >> current;
        resistance = voltage / current;
        cout << "Resistance = " << resistance << " Ohms" << endl;
        cout << "Continue? (Y/N): "; cin >> again;
    } while (again == 'Y' || again == 'y');
    return 0;
}
