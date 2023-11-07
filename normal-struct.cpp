#include <iostream>
using namespace std;

struct{
    string name;
    int age; 
}Data, Data2;

int main(){
    Data.name = "Min Khant";
    Data.age = 19;

    Data2.name = "Thurein";
    Data2.age = 19;

    cout << Data.name << endl;
    cout << Data.age << endl;


    cout << Data2.name << endl;
    cout << Data2.age << endl;

    return 0;
}