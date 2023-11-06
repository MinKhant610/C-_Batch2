#include <iostream>
#include <cmath>
using namespace std;

void sayHello(string name, int age){
    cout << "hello " << name << endl;
    cout << "age " << age << endl;
}

int main(){
    // cout << min(1, 2) << endl;
    string name = "Min Khant";
    sayHello(name, 19);
    return 0;
}

