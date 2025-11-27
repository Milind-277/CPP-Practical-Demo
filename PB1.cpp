//Write a C++ program which demonstrates Class declaration, Object creation, Class member’s definition and Function call. Consider any suitable case study
//(Student, Employee Data, Library)



#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll;
    float marks;

public:
    void setData(string n, int r, float m) {
        name = n;
        roll = r;
        marks = m;
    }

    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    Student s1;

    s1.setData("Amit", 101, 89.5);
    s1.display();

    return 0;
}
