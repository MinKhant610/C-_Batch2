#include <iostream>
using namespace std;

class Myclass{
    public :
    int age;
    string name;

    void setData(string name, int age){
        this->age = age;
        this->name = name;
    }

    void getData(){
        cout << this->age << endl;
        cout << this->name << endl;
    }
};


int main(){
    Myclass myObj;
    // myObj.setData("Min Khant", 19);
    myObj.name = "Aung Tun Kyaw";
    myObj.age = 20;
    myObj.getData();
    return 0;
}