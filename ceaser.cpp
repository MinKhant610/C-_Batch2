#include <iostream>
using namespace std;

int main(){

    string text;
    int move_key;
    char arr[100] = {};

    cout << "Enter text : " ;
    cin >> text;
    cout << "Enter move key :";
    cin >> move_key;

    int length = text.length();

    for (int i = 0; i < length; i++){
        arr[i] = text[i] + move_key;
    }

    cout << "Your encrypt text : ";
    
    for(char text : arr){
        cout << text;
    }

    return 0;
}