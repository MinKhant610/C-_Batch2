#include <iostream>
using namespace std;

void printArr(int arr[5]){
    for (int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[5] = {0, 1, 2, 3, 4};

    printArr(arr);
    return 0;
}