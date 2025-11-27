//Design a class Marks to store and display marks of 5 subjects using an array.
        //1. Add a function getAverage() to calculate average marks. 
        //2. Implement appropriate member functions.



#include <iostream>
using namespace std;

class Marks {
private:
    int marks[5];     

public:
    void input() {
        cout << "Enter marks of 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    void display() {
        cout << "\nMarks of 5 Subjects:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i+1 << ": " << marks[i] << endl;
        }
    }

    float getAverage() {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += marks[i];
        }
        return sum / 5.0;   
    }
};

int main() {
    Marks m;

    m.input();      
    m.display();    

    cout << "\nAverage Marks: " << m.getAverage() << endl;

    return 0;
}
