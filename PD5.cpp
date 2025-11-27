//A school system needs a way to store and update student marks. A Student class is created with member variables to store the student’s name and marks. While setting data, the developer faces a naming conflict. This is resolved using this pointer.
        //1. Create a class Student with: string name, int marks
        //2. Define a member function void setData(string name, int marks): Use the this pointer to assign values.
        //3. Create a void display() function to show student details.




#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    void setData(string name, int marks) {
        this->name = name;     
        this->marks = marks;
    }

    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    s.setData("Rahul", 88);
    s.display();

    return 0;
}
