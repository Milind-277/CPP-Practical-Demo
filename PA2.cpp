//Design and implement a calculator in C++ that performs basic arithmetic operations. The calculator should support operations such as addition, subtraction, multiplication, division, and modulus. The program should accept user input, perform the selected operation, and display the result.


#include <iostream>
using namespace std;

int main () {
    int choice;
    double num1, num2;
    int int1, int2;
    
    do {
        cout << "\n===== simple Calculator =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Exit\n";
        cout << "Enter your choice : \n";
        cin >> choice;
        
        switch (choice) {
            
            case 1:
                cout << "Enter two numbers : ";
                cin >> num1 >> num2;
                cout << "Result : " << num1 + num2 <<endl;
                break;
                
            case 2:
                cout << "Enter two numbers : ";
                cin >> num1 >> num2;
                cout << "Result : " << num1 - num2 <<endl;
                break;
                
            case 3:
                cout << "Enter two numbers : ";
                cin >> num1 >> num2;
                cout << "Result : " << num1 * num2 <<endl;
                break;
                
            case 4:
                cout << "Enter two numbers : ";
                cin >> num1 >> num2;
                if (num2!=0)
                    cout << "Result : " << num1 / num2 <<endl;
                else
                    cout << "Error! Division by zero.\n";
                break;
                
            case 5:
                cout << "Enter two numbers : ";
                cin >> int1 >> int2;
                if (num2!=0)
                    cout << "Result : " << int1 % int2 <<endl;
                else
                    cout << "Error! Modulus by zero.\n";
                break;
                
            case 6:
                cout << "Exiting Program.\n";
                break;
            default:
                cout << "Invalid choice. Please Try Again.\n";
            }
            
        } while (choice != 6);
        
        return 0;
}