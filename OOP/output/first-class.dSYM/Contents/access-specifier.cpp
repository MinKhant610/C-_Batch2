#include <iostream>
using namespace std;
//Encapsulation
class Myclass{
    private :
    int age;
    string name;

    public:
    //setter
    void setData(string name, int age){
        this->age = age;
        this->name = name;
    }
    //getter
    void getData(){
        cout << this->age << endl;
        cout << this->name << endl;
    }
};


int main(){
    Myclass myObj;
    myObj.setData("Min Khant", 19);
    myObj.getData();
    return 0;
}