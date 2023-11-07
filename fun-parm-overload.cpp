#include <iostream>
using namespace std;

int plusFun(int x){
    return x;
}

int plusFun(int x , int y){
    return x + y;
}

double plusFun(double x , double y){
    return x - y;
}

int main(){
    cout << plusFun(10.11, 11.11);
    return 0;
}