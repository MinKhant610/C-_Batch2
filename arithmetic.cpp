#include <iostream>
using namespace std;

int main(){
    /*
    Arithmetic Operator
    + - * /
    ++ --
    */
    int num1 = 10;
    int num2 = 5;

    cout << "num1 plus(+) num2 :"<< (num1 + num2) << endl;
    cout << "num1 (-) num2 : "<< (num1 - num2) << endl;
    cout << "num1 multiply(*) num2 :"<< (num1 * num2) << endl;
    cout << "num1 divide(/) num2 : "<< (num1 / num2) << endl;
    cout << "num1 remainder(%) num2 : "<< (num1 % num2) << endl;

    //num1 = num1 + 1;
    num1++;
    cout << num1 << endl;
    //num2 = num2 - 1;
    num2--;
    cout << num2 << endl;

    return 0;
}