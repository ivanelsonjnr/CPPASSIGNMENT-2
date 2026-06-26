#include <iostream>
using namespace std;

int main() {
    int result, passed = 0, failed = 0;
    for (int i = 1; i <= 15; i++) {
        cout << "Component " << i << " result (1=Pass, 0=Fail): ";
        cin >> result;
        if (result == 1) {
            passed++;
        } else {
            failed++;
        }
    }
    cout << "Passed components: " << passed << endl;
    cout << "Failed components: " << failed << endl;
    return 0;
}

