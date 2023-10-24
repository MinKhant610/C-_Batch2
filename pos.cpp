#include <iostream>
using namespace std;

int main(){
    int speed = 700;
    int shark = 1500;
    int cola = 700;

    int user_input = 0;
    int user_money = 0;

    cout << "Choose Number to add cart " << endl;
    cout << "---------------------------" << endl;
    cout << " 1 Speed : " << speed << endl;
    cout << " 2 Shark : " << shark << endl;
    cout << " 3 Cola : " << cola << endl;
    cout << " >> " ;
    cin >> user_input;

    switch(user_input){
        case 1 :
        cout << "Enter your money : ";
        cin >> user_money;
        cout << "Cash back " << user_money - speed << endl;
        cout << "Thank for visiting ..." << endl;
        break;

        case 2 :
        cout << "Enter your money : ";
        cin >> user_money;
        cout << "Cash back " << user_money - shark << endl;
        cout << "Thank for visiting ..." << endl;
        break;  

        case 3 :
        cout << "Enter your money : ";
        cin >> user_money;
        cout << "Cash back " << user_money - cola << endl;
        cout << "Thank for visiting ..." << endl;
        break;

        default : 
        cout << "Enter 1 to 3 only " << endl;
        break;
    }

    return 0;
}