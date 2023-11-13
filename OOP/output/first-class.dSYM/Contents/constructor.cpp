#include <iostream>
using namespace std;

class Myclass{
    public:
    Myclass(string name){ //constructor
        cout << "hello " << name << endl;
    }
};

int main(){
    Myclass myObj("Min Khant");
    Myclass myObj2("Aung Tun Kyaw");
    return 0;
}