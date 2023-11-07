#include <iostream>
using namespace std;

int plusFun(int x , int y){
    return x + y;
}

double plusFun(double x, double y){
    return x + y;
}

string plusFun(string x, string y){
    return x +y;
}

int main(){
    int num = plusFun(2, 3);
    double num2 = plusFun(2.3, 4.2);

    cout << num << endl;
    cout << num2 << endl;
    cout << plusFun("min", "khant");
    return 0;
}