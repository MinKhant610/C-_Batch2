#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // ofstream => create file 
    // ifstream => read file 
    // fstream => ofstream + ifstream;
    ofstream createFile("text.txt");
    createFile << "Hello I am Min Khant" << endl;
    createFile << "Hello I am Thurein" << endl;
    createFile << "Hello I am Bhone Thant" << endl;

    if(createFile){
        cout << "Data store successfully" << endl;
    }

    createFile.close();

    return 0;
}