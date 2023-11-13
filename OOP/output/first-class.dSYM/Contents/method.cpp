#include <iostream>
using namespace std;

class Myclass{ //class
    public: // Access specifier
    int age; // attribute
    string name;

    void printData(){ // method
        cout << "Age : " << this->age << endl;
        cout << "Name : " << this->name << endl;
    }

    void hello();   
};

void Myclass::hello(){
    cout << "hello" << endl;
};

int main(){
    Myclass myObj;

    myObj.age = 19;
    myObj.name = "Min Khant";

    cout << myObj.name << endl;
    cout << myObj.age  << endl;

    myObj.printData();
    string name = "minkhant";

    myObj.hello();

}