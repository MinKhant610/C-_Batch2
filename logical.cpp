#include <iostream>
using namespace std;

int main(){
    /*
    Logical 
    &&  
    ||
    */
    int num1 = 10;
    int num2 = 10;
    int num3 = 11;

    bool is_true = true;
    bool is_false = false;

    cout << is_true << endl;
    cout << is_false << endl;

    cout << (num1 == num2 && num1 == num3) << endl;
    cout << (num1 == num2 || num1 == num3) << endl;
    return 0;
}