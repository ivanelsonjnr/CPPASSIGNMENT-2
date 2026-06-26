#include <iostream>
using namespace std;

int main() {
    double power, total = 0;
    for (int i = 1; i <= 20; i++) {
        cout << "Enter power rating for appliance " << i << " (W): ";
        cin >> power;
        total += power;
        if (total > 5000) {
            cout << "Maximum load exceeded. Stop adding appliances." << endl;
            break;
        }
    }
    cout << "Final Total Load = " << total << " W" << endl;
    return 0;
}

