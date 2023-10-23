#include <iostream>
using namespace std;

int main(){
    int num = 5;

    switch(num){
        case 'z':
        cout << " a is 10" << endl;
        break;

        case 3 :
        cout << " a is 3 " << endl;
        break;

        case 5:
        cout << "a is 5" << endl;
        break;

        default:
        cout << "a in null" << endl;
        break;
    }
    return 0;
}