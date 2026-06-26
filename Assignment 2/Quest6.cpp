#include <iostream>
using namespace std;

int main() {
    int choice;
    double n1, n2, vp, vs, np, ns, ratio;
    cout << "Transformer Calculator Menu" << endl;
    cout << "1. Calculate turns ratio" << endl;
    cout << "2. Calculate secondary voltage" << endl;
    cout << "3. Calculate primary voltage" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter primary turns (N1): "; cin >> n1;
            cout << "Enter secondary turns (N2): "; cin >> n2;
            ratio = n1 / n2;
            cout << "Turns Ratio = " << ratio << endl;
            break;
        case 2:
            cout << "Enter primary voltage (V): "; cin >> vp;
            cout << "Enter secondary turns (Ns): "; cin >> ns;
            cout << "Enter primary turns (Np): "; cin >> np;
            vs = vp * ns / np;
            cout << "Secondary Voltage = " << vs << " V" << endl;
            break;
        case 3:
            cout << "Enter secondary voltage (V): "; cin >> vs;
            cout << "Enter primary turns (Np): "; cin >> np;
            cout << "Enter secondary turns (Ns): "; cin >> ns;
            vp = vs * np / ns;
            cout << "Primary Voltage = " << vp << " V" << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }
    return 0;
}

