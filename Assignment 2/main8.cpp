#include <iostream>
using namespace std;

int main() {
    double l1, l2, l3, average;
    for (int i = 1; i <= 6; i++) {
        cout << "--- Set " << i << " ---" << endl;
        cout << "Enter Line 1 current (A): "; cin >> l1;
        cout << "Enter Line 2 current (A): "; cin >> l2;
        cout << "Enter Line 3 current (A): "; cin >> l3;
        average = (l1 + l2 + l3) / 3.0;
        cout << "Average Current for Set " << i << " = " << average << " A" << endl;
    }
    return 0;
}

