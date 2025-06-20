#include <iostream>
using namespace std;

int main(){
    int n;
    int m,o;
    cout << "Enter a number: "; //print
    cin >> n; //input
    cout << "Enter another number: ";
    cin >> m;
    o = n + m;
    cout << "The sum is: " << o << endl;
    float p = n/m; //operation
    cout << "The division is:" << p << endl;

    return 0;
}