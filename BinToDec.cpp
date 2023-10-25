#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string num;
    int dec = 0;
    cout << "Enter binary num : ";
    cin >> num;
    // 1 0 1 len = 3
    for (int i = 0; i < num.size(); i++){
        if (num[i] == '1'){
            dec = dec + pow(2, num.size() - 1 - i);
        }
    }
    cout << dec << endl;
    return 0;
}