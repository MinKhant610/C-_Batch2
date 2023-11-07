#include <iostream>
using namespace std;

// 5 4 3 2 1 1
//recursion
int factorial(int n){
    if (n == 0){
        return 1;
    }
    return n * factorial(n - 1);
}

int main(){
    int num = factorial(5);
    cout << num << endl;
    return 0;
}