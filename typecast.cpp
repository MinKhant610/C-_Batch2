#include <iostream>
using namespace std;

int main (){
    float a = 11.55;
    float b = 12.11;
    int c = (int) a + int (b);
    cout << a + b << endl;
    cout << "After type cast => " << c << endl;
    return 0;
}