#include <iostream>
using namespace std;

int myMin(int firstNum, int secondNum){
    int minNum = (firstNum > secondNum) ? secondNum : firstNum;
    return minNum;
}


int main(){
    int num1 = 0;
    int num2 = myMin(1, 5);
    if (num1 < num2){
        cout << "num1 is minimun" << endl;
    }
    return 0;
}