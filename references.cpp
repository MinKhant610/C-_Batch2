#include <iostream>
using namespace std;

int main(){
    string food = "pizza";
    string &meal = food;
    // string food2 = "pizza";
    // food = meal = "pizza";
    cout << food << endl;
    cout << meal << endl;

    // meal = "chicken";
    // cout << food << endl;
    // cout << meal << endl;

    return 0;
}