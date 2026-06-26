#include <iostream>
using namespace std;

int main() {
    double resistance;
    cout << "Enter earth resistance (Ohms): ";
    cin >> resistance;
    while (resistance <= 5) {
        cout << "Earth resistance acceptable." << endl;
        cout << "Enter next earth resistance (Ohms): ";
        cin >> resistance;
    }
    cout << "Earth resistance too high. Improve earthing system." << endl;
    return 0;
