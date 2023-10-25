#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string binary_num;
    cout << "Enter binary num : ";
    cin >> binary_num;
    int len = binary_num.length();

    int decimal;
    for (int i = 0; i < len; i++){
        if (binary_num[i] == '1'){
            decimal += pow(2, len-1-i);
        }
    }
    string hex;
    while (decimal > 0){
        int remainder = decimal % 16;
        char hex_digit = (remainder < 10 ) ? remainder + '0' : remainder - 10 + 'A';
        hex = hex + hex_digit;
        decimal = decimal / 16;
    }
    cout << "Hexa value is : " << hex << endl;
    
}