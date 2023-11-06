#include <iostream>
using namespace std;

void myMin(int firstNum, int secondNum){
    // if (firstNum > secondNum){
    //     cout << secondNum << endl;
    // }else{
    //     cout << firstNum << endl;
    // }

    int minNum = (firstNum > secondNum) ? secondNum : firstNum;
    cout << minNum << endl;
}


int main(){
    myMin(0,5);
    return 0;
}