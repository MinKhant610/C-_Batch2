#include <iostream>
using namespace std;

int main(){
    string arr[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };
    
    for (int i = 0; i < 2; i++){
        for (int z = 0; z < 4; z ++){
            cout << arr[i][z] << endl;
        }
    }
    return 0;
}