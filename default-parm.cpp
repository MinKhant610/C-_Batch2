#include <iostream>
using namespace std;

void sayHello(string name = "MinKhant", int age = 19){
    cout << "Name :" << name << endl;
    cout << "Age : " << age << endl;
}

int main(){
    sayHello();
    return 0;
}