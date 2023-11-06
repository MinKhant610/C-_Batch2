#include <iostream>
using namespace std;
void sayHello(string name, int age);

int main(){
    sayHello("Min Khant", 19);
    return 0;
}

void sayHello(string name, int age){
    cout << "name : " <<  name << endl;
    cout << "age : " <<  age << endl;
}