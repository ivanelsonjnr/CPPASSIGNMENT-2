#include <iostream>
using namespace std;

int main() {
    double voltage;
    cout << "Enter solar panel voltage (V): ";
    cin >> voltage;
    while (voltage >= 18) {
        cout << "Voltage is within operating level." << endl;
        cout << "Enter next solar panel voltage (V): ";
        cin >> voltage;
    }
    cout << "Solar panel voltage below operating level." << endl;
    return 0;
     }
