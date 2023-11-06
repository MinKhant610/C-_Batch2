#include <iostream>
using namespace std;

// programming rule => DRY => don't repeat yourself

void cashBack(int price){
    int user_money;
    cout << "Enter your money : ";
    cin >> user_money;
    cout << "Cash back " << user_money - price << endl;
    cout << "Thank for visiting ..." << endl;
}

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
        cashBack(speed);
        break;

        case 2 :
        cashBack(shark);
        break;  

        case 3 :
        cashBack(cola);
        break;

        default : 
        cout << "Enter 1 to 3 only " << endl;
        break;
    }

    return 0;
}