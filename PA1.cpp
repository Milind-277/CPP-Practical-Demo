//Write a C++ menu driven program to take integer number as input from user to calculate following operations and display result: 1.Square, 2.Cube, 3.Square root, 4.Factorial


#include <iostream>
#include <cmath>
using namespace std;

long long factorial (int n) {
    if (n<0) return -1;
    long long fact = 1;
    for (int i=1; i<=n; i++)
        fact *= i;
        return fact;
}

int main() {
    int choice; 
    int num;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Square\n";
        cout << "2. Cube\n";
        cout << "3. Square Root\n";
        cout << "4. Factorial\n";
        cout << "5. Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;

        if (choice >=1 && choice <=4) {
            cout << "Enter an integer number : ";
            cin >> num;
        }

        switch (choice)
        {
            case 1 :
                cout << "Square of " <<num <<" is : " <<num*num <<endl;
                break;
            
            case 2 :
                cout << "Cube of " <<num <<" is : " <<num*num*num <<endl;
                break;
                
            case 3 :
                if (num<0)
                    cout << "Square root of negative number is not defined in real numbers." <<endl;
                else
                    cout << "Square root of " <<num <<" is : " <<sqrt(num) <<endl;
                break;

            case 4 :
                if (num<0)
                    cout << "Factorial is not defined for negative numbers." <<endl;
                else
                    cout << "Factorial of " <<num <<" is : " <<factorial(num) <<endl;
                break;

            case 5 :
                cout << "Exiting Program..." <<endl;
                break;

            default:
                cout << "Invalid choice. Please Try Again." <<endl;
        }
    }while (choice != 5);

    return 0;
    
}