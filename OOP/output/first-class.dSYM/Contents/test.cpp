#include <iostream>
#include "myheader.h"
using namespace std;

class Child: public Myclass{

};

int main(){
    Myclass obj;

    cout << obj.mutiplyFun(2, 2) << endl;
    Child childObj;
    cout << childObj.plusFun(2, 2);
}