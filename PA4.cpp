//Write a C++ Program to read any color from rainbow and Display its name using Switch Statement.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;

    cout << "===== Rainbow Colors =====\n";
    cout << "1. Violet\n";
    cout << "2. Indigo\n";
    cout << "3. Blue\n";
    cout << "4. Green\n";
    cout << "5. Yellow\n";
    cout << "6. Orange\n";
    cout << "7. Red\n";
    cout << "Enter your choice (1-7): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected Violet.\n";
            break;
        case 2:
            cout << "You selected Indigo.\n";
            break;
        case 3:
            cout << "You selected Blue.\n";
            break;
        case 4:
            cout << "You selected Green.\n";
            break;
        case 5:
            cout << "You selected Yellow.\n";
            break;
        case 6:
            cout << "You selected Orange.\n";
            break;
        case 7:
            cout << "You selected Red.\n";
            break;
        default:
            cout << "Invalid choice! Please select a number between 1 and 7.\n";
    }

    return 0;
}
