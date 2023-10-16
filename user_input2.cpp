#include <iostream>
using namespace std;

int main(){
    string name; // 4bytes
    cout << "Enter your name : ";
    getline(cin, name);
    // buffer overflow 
    cout << "Your name is : " << name << endl;
    return 0;
}