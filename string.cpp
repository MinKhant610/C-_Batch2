#include <iostream>
using namespace std;

int main(){
    string name = "MinKhant";
    /*
    string = char array
    array start from => 0
      0    1    2    3    4    5   6     7   8
    ["M", "i", "n", " ", "K", "h", "a", "n", "t"];
    */
   cout << name[3] << endl;
   cout << name.size() << endl;
   cout << name.length() << endl;
   cout << sizeof(char) << endl;
}