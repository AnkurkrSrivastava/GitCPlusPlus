#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string st = "This is sample text";
    //Opening flie usnig constructor and writing to it
    ofstream out("sample.txt");
    out << st;
    return 0;
}