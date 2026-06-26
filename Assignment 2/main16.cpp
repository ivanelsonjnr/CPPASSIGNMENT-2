#include <iostream>
using namespace std;

int main() {
    double voltage, current, power;
    char again;
    do {
        cout << "Enter voltage (V): "; cin >> voltage;
        cout << "Enter current (A): "; cin >> current;
        power = voltage * current;
        cout << "DC Power = " << power << " W" << endl;
        cout << "Another calculation? (Y/N): "; cin >> again;
    } while (again == 'Y' || again == 'y');
    return 0;
}

