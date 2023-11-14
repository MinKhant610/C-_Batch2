#include <iostream>
using namespace std;

int main(){
    enum days{SUN = 5 , MON, TUE, WED, THU, FRI, SAT};

    int usr_input;
    cout << "Enter day (0 - 6 ) : ";
    cin >> usr_input;

    if (usr_input == SUN || usr_input == SAT){
        cout << "holiday" << endl;
    }else {
        cout << "not holiday" << endl;
    }
    
    for (int i = SUN; i <= SAT; i++){
        cout << i << endl;
    }
    return 0;
}