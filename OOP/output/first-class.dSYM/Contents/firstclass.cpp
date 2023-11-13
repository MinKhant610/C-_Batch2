#include <iostream>
using namespace std;

class Myclass{ //class
    public: // Access specifier
    int age; // attribute
    string name;
};

int main(){
    Myclass myObj;

    myObj.age = 19;
    myObj.name = "Min Khant";

    cout << myObj.name << endl;
    cout << myObj.age  << endl;
}