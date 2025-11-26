//Create base class University, derive College, and then derive Department.
//Display full department info using all inherited data.
                    //1. University → base class
                    //2. College → derived from University
                    //3. Department → derived from College
                    //4. Finally, we display the full department info using inherited data.



#include <iostream>
#include <string>
using namespace std;

class University {
    protected:
        string uniName;
        string uniLocation;

    public:
        void inputUniversity() {
            cout << "Enter University Name : ";
            getline(cin, uniName);
            cout << "Enter University Location : ";
            getline(cin, uniLocation);
        }

        void displayUniversity() {
            cout << "\n === University Information ===\n";
            cout << "University : " <<uniName <<endl;
            cout << "Lovation : " <<uniLocation <<endl;
        }
};

class College : public University {
    protected:
        string collegeName;
        string collegeDean;

    public:
        void inputCollege() {
            cout << "Enter College Name : ";
            getline(cin, collegeName);
            cout << "Enter College Dean : ";
            getline(cin, collegeDean);
        }

        void displayCollege() {
            cout << "\n=== College Information ===\n";
            cout << "College : " <<collegeName <<endl;
            cout << "Dean : " <<collegeDean <<endl;
        }
};

class Department : public College {
    private:
        string deptName;
        string hod;

    public:
        void inputDepartment() {
            cout << "Enter Department Name : ";
            getline(cin, deptName);
            cout << "Enter Head of Department (HOD) : ";
            getline(cin, hod); 
        }

        void displayDepartment() {
            cout << "\n=== Department Information ===\n";
            cout << "Department : " <<deptName <<endl;
            cout << "HOD : " <<hod <<endl;
        }

        void displayFullInfo() {
            displayUniversity();
            displayCollege();
            displayDepartment();
        }
};

int main() {
    Department dept;

    dept.inputUniversity();
    dept.inputCollege();
    dept.inputDepartment();

    cout << "\n=== Complete Department Info ===\n";
    dept.displayFullInfo();


    return 0;
    
}                    