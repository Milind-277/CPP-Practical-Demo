//Create a base class StudentProfile that holds common info like name, class, and roll number.
        //1. Derive class ClubMember to represent students involved in clubs (like drama or robotics).
        //2. Derive class Volunteer for students helping in community programs.
        //3. Then, derive ActiveStudent who is both a ClubMember and a Volunteer.



#include <iostream>
#include <string>
using namespace std;

class studentprofile {
protected:
    string name;
    string className;
    int rollno;

public:
    void inputprofile() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Class: ";
        getline(cin, className);
        cout << "Enter Roll Number: ";
        cin >> rollno;
        cin.ignore(); 
    }

    void displayprofile() {
        cout << "\nName: " << name;
        cout << "\nClass: " << className;
        cout << "\nRoll No: " << rollno;
    }
};

class clubmember : virtual public studentprofile {
protected:
    string clubName;

public:
    void inputClub() {
        cout << "Enter Club Name (e.g., Drama, Robotics): ";
        getline(cin, clubName);
    }

    void displayClub() {
        cout << "\nClub Member of: " << clubName;
    }
};

class Volunteer : virtual public studentprofile {
protected:
    string programName;

public:
    void inputVolunteer() {
        cout << "Enter Volunteer Program Name: ";
        getline(cin, programName);
    }

    void displayVolunteer() {
        cout << "\nVolunteer in: " << programName;
    }
};

class ActiveStudent : public clubmember, public Volunteer {
public:
    void inputActiveStudent() {
        inputprofile();
        inputClub();
        inputVolunteer();
    }

    void displayActiveStudent() {
        cout << "\n\n--- Active Student Details ---";
        displayprofile();
        displayClub();
        displayVolunteer();
    }
};

int main() {
    ActiveStudent student;
    student.inputActiveStudent();
    student.displayActiveStudent();

    return 0;
}
