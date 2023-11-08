#include <iostream>
using namespace std;

struct Data{
    int age;
    string name;
};

int main(){
    Data data1;
    Data data2;

    data1.name = "Min Khant";
    data1.age = 19;

    data2.name = "Bhone Thant";
    data2.age = 19;

    cout << data1.name << endl;
    cout << data1.age << endl;
    cout << data2.name << endl;
    cout << data2.age << endl;

    return 0;
}