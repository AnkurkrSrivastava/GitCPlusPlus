#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //connecting our file with hout stream
    ofstream hout("sample3.txt");
    //creating a name string and filling it with the string entered by the user
    cout << "Enter your name: ";
    string name;
    cin >> name;
    //writing a string to the file
    hout << "My name is " + name;
    return 0;
}