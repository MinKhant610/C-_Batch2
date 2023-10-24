#include <iostream>

using namespace std;

int main(){
    int num1,num2;
    char sign;

    cout << "Enter first num :";
    cin >> num1;
    cout << "Enter operator :";
    cin >> sign;
    cout << "Enter second num :";
    cin >> num2;

    switch(sign){
        case '+' :
        cout << "Answer is : " <<  num1 + num2 << endl;
        break;

        case '-' :
        cout << "Answer is : " <<  num1 - num2 << endl;
        break;

        case '*' :
        cout << "Answer is : " <<  num1 * num2 << endl;
        break;

        case '/' :
        cout << "Answer is : " <<  num1 / num2 << endl;
        break;

        default :
        cout << "put only these operator (+ - * /)" << endl;
        break;
    }

    return 0;

}