#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string binary_num;
    cout << "Enter binary num : ";
    cin >> binary_num;
    int len = binary_num.length();

    int decimal = 0;
    for (int i = 0; i < len; i++) {
        if (binary_num[i] == '1') {
            decimal += pow(2, len - 1 - i);
        }
    }
    // 8 
    string octal; 
    while (decimal > 0) {
        int remainder = decimal % 8;
        char octalDigit = remainder + '0';
        octal = octalDigit + octal;
        decimal /= 8;
    }
    cout << "Octal value is : " << octal << endl;
    
    return 0; 
}
