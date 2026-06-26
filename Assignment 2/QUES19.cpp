#include <iostream>
using namespace std;

int main() {
    double reading, sum = 0;
    int count = 0;
    for (int i = 1; i <= 12; i++) {
        cout << "Enter sensor reading " << i << ": ";
        cin >> reading;
        if (reading == 999) {
            cout << "Faulty reading skipped." << endl;
            continue;
        }
        sum += reading;
        count++;
    }
    if (count > 0) {
        cout << "Average of valid readings = " << sum / count << endl;
    } else {
        cout << "No valid readings." << endl;
    }
    return 0;
}
