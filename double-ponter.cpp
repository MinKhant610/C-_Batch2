#include <iostream>
using namespace std;

int main(){
    int test = 10;
    int* tptr;
    int **dptr;
    tptr = &test;
    dptr = &tptr;

    cout << test << endl;
    cout << tptr << endl;
    cout << dptr << endl;

    return 0;
}