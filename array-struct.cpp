#include <iostream>
using namespace std;

struct Data{
    int age;
    string name; 
};

int main(){
    Data data[3];
    data[0].age = 19;
    data[0].name = "Min Khant";

    data[1].age = 19;
    data[1].name = "Thurein";
    
    data[2].age = 19;
    data[2].name = "Bhone Thant";


    for (int i=0; i < 3; i++){
        cout << data[i].name << endl;
        cout << data[i].age << endl;
    }

    return 0;
}