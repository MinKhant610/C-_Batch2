//object
#include <iostream>
using namespace std;

int main(){
    string text = "www.codewar.com#about";
    int pos = text.find("#");
    string newtext;
    
    newtext = text.substr(0, pos);
    cout << newtext << endl;
}