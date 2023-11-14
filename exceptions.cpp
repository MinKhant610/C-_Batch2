#include <iostream>
#include <climits>
using namespace std;

int main(){
    try{
        int age = 10;
        if (age > 18){
            cout << "welcome" << endl;
        }else {
            throw 500;
        }
    }catch (int error){
        cout << "Error : " << error << endl;
        cout << "Access denied " << endl;
    }
}