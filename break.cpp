#include <iostream>
using namespace std;

int main(){
    int num = 0;
    while (num != 5){
        if (num == 3){
            break;
        }
        cout << "hello" << endl;
        num++;
    }
    return 0;
}