#include <iostream>
using namespace std;

int main(){

    int nums[3] = {1, 2, 3};
    nums[2] = 9;
    //for each 
    for (int i : nums){
        cout << i << endl;
    }

    for (int i = 0; i < 3; i++){
        if (i == 2){
            cout << "hello" << endl;
        }
        cout << nums[i] << endl;
    }

    return 0;
}