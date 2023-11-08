#include <iostream>
using namespace std;

struct{
    int age;
    string name; 
}Data[3];

int main(){
    Data[0].age = 19;
    Data[0].name = "Min Khant";

    Data[1].age = 19;
    Data[1].name = "Thurein";
    
    Data[2].age = 19;
    Data[2].name = "Bhone Thant";


    for (int i=0; i < 3; i++){
        cout << Data[i].name << endl;
        cout << Data[i].age << endl;
    }

    return 0;
}