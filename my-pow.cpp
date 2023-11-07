#include <iostream>
#include <cmath>
using namespace std;

int myPow(int base, int power){
    int start_point = 0;
    int power_value = 1;
    while(start_point != power){
        power_value = base * power_value;
        start_point ++;
    }
    return power_value;
}

int main(){
    cout << "cmath pow =>" << pow(33, 3) << endl; // cmath => pow function
    cout << "own pow =>" <<  myPow(33, 3) << endl; // own function
    return 0;
}