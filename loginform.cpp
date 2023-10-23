#include <iostream>
using namespace std;

int main(){
    string db_name = "MinKhant";
    string db_pass = "12345";

    string user_name;
    string user_pass;
    int count = 0;
    while (user_name != db_name || user_pass != db_pass){
        if (count == 3){
            cout << "Wait 1 minute " << endl;
            break;
        }
        cout << "Enter your name :";
        cin >> user_name;
        cout << "Enter your password :";
        cin >> user_pass;

        if (db_name == user_name && db_pass == user_pass){
            cout << "Login success " << endl;
        }else {
            count++;
            cout << "Access denied" << endl;
        }
    }
    return 0;
}