#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num1 = 10;
    int num2 = 11;
    int num3 = 33;
    int num4 = 42;

    float num5 = 11.53;
    cout << max(num1, num2) << endl;
    cout << min(num1, num2) << endl;

    int temp1 = max(num1, num2);
    int temp2 = max (num3, num4);

    cout <<  max(temp1, temp2) << endl;

    cout << round(num5) << endl;
    cout << sqrt(2) << endl;
    cout << log(2) << endl;
    cout << sin(30) << endl;
    
    return 0;
}