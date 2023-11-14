#include <iostream>
using namespace std;

class Myclass{ 
    public: 
    int age; 
    string name;
    static void hello(){
        cout << "hello" << endl;
    }
};

int main(){
    Myclass::hello();
}