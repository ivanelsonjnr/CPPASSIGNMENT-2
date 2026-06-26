#include <iostream>
using namespace std;

int main() {
    double power, time, energy, totalEnergy = 0;
    for (int i = 1; i <= 8; i++) {
        cout << "Appliance " << i << " - Enter power rating (W): ";
        cin >> power;
        cout << "Appliance " << i << " - Enter usage time (hours): ";
        cin >> time;
        energy = power * time;
        totalEnergy += energy;
    }
    cout << "Total Energy Consumed = " << totalEnergy << " Wh" << endl;
    return 0;
}
