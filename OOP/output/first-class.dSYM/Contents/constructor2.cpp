#include <iostream>
using namespace std;

class Myclass{
    public:
    Myclass(string name);
};

Myclass::Myclass(string name){
    cout << "Hello " << name << endl;
};

int main(){
    Myclass myObj("Min Khant");
    Myclass myObj2("Aung Tun Kyaw");
    return 0;
}