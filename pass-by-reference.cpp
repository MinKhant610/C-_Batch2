#include <iostream>
using namespace std;


void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y= temp;
}

int main(){
    int a = 10;
    int b = 11;

    cout << "before swap : " << a << " " << b << endl;

    swap(a ,b);
    cout << "after swap : " << a << " " << b << endl;

}