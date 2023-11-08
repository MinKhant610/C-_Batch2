#include <iostream>
#include <fstream>
using namespace std;

struct Data{
    string name, phone;
    int roll;
};

int main(){
    ofstream createFile("McData.txt", ios::app);

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

        createFile << "Name : " << mcData[i].name << endl;
        createFile << "Roll : " << mcData[i].roll << endl;
        createFile << "Phone : " << mcData[i].phone << endl;
        createFile <<"________________________________" << endl;
    }
    if(createFile){
        cout << "Data store successfully" << endl;
    }
    createFile.close();
    return 0;
}