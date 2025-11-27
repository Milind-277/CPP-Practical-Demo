//Write a program by creating an 'Employee' class having the following functions and print the final salary.
        //1. 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
        //2. 'AddSal()' which adds Rs.10000 to the salary of the employee if it is less than Rs.50000.
        //3. 'AddWork()' which adds Rs. 1000 to the salary of the employee if the number of hours of work per day is more than 6 hours.




#include <iostream>
using namespace std;

class Employee {
private:
    int salary;
    int hours;

public:
    void getInfo(int s, int h) {
        salary = s;
        hours = h;
    }

    void AddSal() {
        if (salary < 50000) {
            salary += 10000;
        }
    }

    void AddWork() {
        if (hours > 6) {
            salary += 1000;
        }
    }

    void display() {
        cout << "Final Salary of Employee: Rs." << salary << endl;
    }
};

int main() {
    Employee e;
    int sal, hrs;

    cout << "Enter Employee Salary: ";
    cin >> sal;

    cout << "Enter Working Hours Per Day: ";
    cin >> hrs;

    e.getInfo(sal, hrs);
    e.AddSal();
    e.AddWork();

    e.display();

    return 0;
}
