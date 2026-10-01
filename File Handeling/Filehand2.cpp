#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string st2;
    ifstream in("sample2.txt");

    while (getline(in, st2)) {
        cout << st2 << endl;
    }

    return 0;
}