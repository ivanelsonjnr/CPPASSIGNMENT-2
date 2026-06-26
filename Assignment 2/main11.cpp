#include <iostream>
using namespace std;

int main() {
    double temp;
    cout << "Enter motor temperature (degrees C): ";
    cin >> temp;
    while (temp <= 90) {
        cout << "Temperature reading accepted." << endl;
        cout << "Enter next motor temperature (degrees C): ";
        cin >> temp;
    }
    cout << "Motor temperature unsafe. Stop motor test." << endl;
    return 0;
}
