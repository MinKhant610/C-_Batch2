#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string output;
    fstream readFile("text2.txt");

    while(getline(readFile, output)){
        cout << output << endl;
    }
    
    readFile.close();

    return 0;
}