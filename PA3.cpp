//Write a C++ program to read 5 subject marks from students and find out passing class of Him/Her like 1. Avg>70 then Distinction, 2. Avg>60 and Avg<70 then First Class, 3. Avg>50 and Avg<60 then Second Class, 4. Avg>40 and Avg<50 then Pass Class, 5. Otherwise Fail. 


#include <iostream>
using namespace std;

int main() {
    float marks[5], sum=0, avg;
    
    cout <<"Enter the Marks of 5 Subjects :";
    for (int i=0; i<5; i++){
        cin >> marks[i];
        sum += marks[i];
    }
    
    avg=sum/5;
    
    cout <<"Average marks :" <<avg <<endl;
    
    if (avg >70){
        cout <<"Result: Distinction" <<endl;
    }
    else if (avg >60 && avg <=70){
        cout <<"Result: First Class" <<endl;
    }
    else if (avg >50 && avg <=60){
        cout <<"Result: Second Class" <<endl;
    }
    else if (avg >40 && avg <=50){
        cout <<"Result: Pass Class" <<endl;
    }
    else {
        cout <<"Result: Fail" <<endl;
    }

    return 0;
}
