#include "iostream"
using namespace  std;

int main(){
    string food = "pizza";
    string* ptr = &food;
    string food2 = *ptr;
    
    cout << *ptr << endl;
    cout << ptr << endl;

    *ptr = "chicken";
    cout << food << endl;
    cout << food2 << endl;

    return 0;
}