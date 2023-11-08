#include <iostream>
using namespace std;

struct Data{
    string name, phone;
    int roll;
};

int main(){
    int numberOfStudent = 0;
    cout << "Enter number of student :";
    cin >> numberOfStudent;

    Data mcData[numberOfStudent];

    for (int i = 0; i < numberOfStudent; i++){
        cout << "Enter name : ";
        cin >> mcData[i].name;
        cout << "Enter roll : ";
        cin >> mcData[i].roll;
        cout << "Enter phone : ";
        cin >> mcData[i].phone;
        cout << " " << endl;
    }
    
    cout << "____Mechtronics____" << endl;
    for (int i =0; i < numberOfStudent; i++){
        
        cout << "Name : " << mcData[i].name << endl;
        cout << "Roll : " << mcData[i].roll << endl;
        cout << "Phone : " << mcData[i].phone << endl;
        cout << "_____________________" << endl;
    }
}