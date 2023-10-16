#include <iostream>
using namespace std;

int main(){
    /*
    Assignment
    = 
    += -= *= /=
    %=d
    &= ^ | 
    >>= <<=
    */
    int a = 10; // assgin
    //a = a + 2;
    a += 2; 
    int b = 4;
    b -= 2; // b = b - 2
    a*=2; // a = a * 2
    a/=2; // a = a / 2
    b%=2; // b = b % 2
    cout << "Value of a " << a << endl;
    cout << "value of b " <<  b << endl;

    int num1 = 4;
    num1 &=2; // and operation
    cout << "num1 and operation " << num1 << endl;

    int num2 = 4;
    num2 |=2; // or operation
    cout << "num2 or operation " << num2 << endl;

    int num3 = 6;
    num3 ^= 2;
    cout << "num3 xor operation " << num3 << endl;

    return 0;
}