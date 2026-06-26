#include <iostream>
#include <string>
using namespace std;

int main() {
    string code;
    string correctCode = "BEE208";
    int attempts = 0;
    while (attempts < 3) {
        cout << "Enter laboratory access code: ";
        cin >> code;
        attempts++;
        if (code == correctCode) {
            cout << "Access granted." << endl;
            return 0;
        } else if (attempts < 3) {
            cout << "Incorrect code. Try again." << endl;
        }
    }
    cout << "Access denied. Maximum attempts reached." << endl;
    return 0;
}
