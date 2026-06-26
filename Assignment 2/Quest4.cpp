#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Fuse Selection Menu" << endl;
    cout << "1. 5 A Fuse" << endl;
    cout << "2. 10 A Fuse" << endl;
    cout << "3. 13 A Fuse" << endl;
    cout << "4. 20 A Fuse" << endl;
    cout << "5. 32 A Fuse" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "5A Fuse: Suitable for lighting circuits." << endl;
            break;
        case 2:
            cout << "10A Fuse: Suitable for small appliances." << endl;
            break;
        case 3:
            cout << "13A Fuse: Suitable for standard socket outlets." << endl;
            break;
        case 4:
            cout << "20A Fuse: Suitable for immersion heaters." << endl;
            break;
        case 5:
            cout << "32A Fuse: Suitable for electric cookers." << endl;
            break;
        default:
            cout << "Invalid choice. Please select 1 to 5." << endl;
    }
    return 0;
}

