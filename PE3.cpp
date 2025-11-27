//Create a program that simulates an ATM withdrawal process.
    //1. Accept the user's account balance and withdrawal amount.
    //2. Throw an exception if the withdrawal amount exceeds the account balance.
    //3. Handle the exception gracefully by displaying an appropriate error message.




#include <iostream>
using namespace std;

class InsufficientFunds
 {
public:
    string message;
    InsufficientFunds(string msg) {
        message = msg;
    }
};

int main() 
{
    double balance, withdrawAmount;

    cout << "Enter Account Balance: ";
    cin >> balance;

    cout << "Enter Withdrawal Amount: ";
    cin >> withdrawAmount;

    try {
        if (withdrawAmount > balance)
            throw InsufficientFunds("Error: Withdrawal amount exceeds available balance!");

        balance = balance - withdrawAmount;
        cout << "\nTransaction Successful!" << endl;
        cout << "Amount Withdrawn: Rs. " << withdrawAmount << endl;
        cout << "Remaining Balance: Rs. " << balance << endl;
    }
    catch (InsufficientFunds e) {
        cout << "\nException Caught: " << e.message << endl;
        cout << "Please enter a valid withdrawal amount." << endl;
    }

    cout << "\nThank you for using our ATM service." << endl;

    return 0;
    
}
