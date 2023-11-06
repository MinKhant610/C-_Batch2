// plqnkdqw
#include <iostream>
#define SIZE 10000
using namespace std;

int main(){
    string text;
    char arr[SIZE] = {};

    cout << "Enter text to decrypt : ";
    getline(cin, text);

    int x = 0;
    int length = text.length();

    for (int i = 1; i < 10; i++){
        for (int j = x; j <= length; j++){
            char store = text[j-x];
            arr[j] = store - i;
        }
        x =  x + text.length();
        length = length + length + i;
    }

    cout << "\n----- decrypt texts -----";

    for (int i = 0; i < text.length() * 10; i++){
        if (i % (text.length()) == 0){
            cout << endl << endl;
        }
        cout << arr[i];
    }

    cout << "\n------------------------" << endl;
    cout << "\nSuccessfully Decrypt" << endl;
    return 0;
}