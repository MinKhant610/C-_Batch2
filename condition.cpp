#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 11;
    int c = 10;

    if (a == b){
        cout << "a is equal b" << endl;
    }else if (a == c){
        cout << "a is equal c" << endl;
    }else {
        cout << "a is not equal b and c" << endl;
    }

    return 0;
}