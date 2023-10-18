#include <iostream>
using namespace std;

int main(){
    string db_name = "MinKhant";
    int db_pass = 12345;

    string user_name;
    int user_pass = 0;

    while (user_name != db_name || user_pass != db_pass){
        cout << "Enter your name :";
        cin >> user_name;
        cout << "Enter your password :";
        cin >> user_pass;

        if (db_name == user_name && db_pass == user_pass){
            cout << "Login success " << endl;
        }else {
            cout << "Access denied" << endl;
        }
    }
    return 0;
}