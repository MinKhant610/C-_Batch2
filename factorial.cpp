#include <iostream>
using namespace std;

int main(){
    // 5! = 5 * 4 * 3 * 2 * 1 => 120
    int factorial_num = 5 ;
    int factorial;
    for (int i = 1; i <= factorial_num; i++){
        factorial = factorial * i;
    }
    cout << factorial << endl;
}