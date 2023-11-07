#include <iostream>
using namespace std;

namespace first{
    string printName(string name){
        return ("Name :", name);
    }

    void printAge(int age){
        cout << "Age : " << age << endl;
    }
}

using namespace first;
int main(){
    cout << "hello" << endl;
    cout << printName("Min Khant");
    printAge(19);
}