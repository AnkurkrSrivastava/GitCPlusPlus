#include <iostream>
using namespace std;

void swapNumbers(int *a, int *b){
    int temp;
    cout << "Before swapping:";
    cout << *a << " " << *b << endl;

    temp = *a;
    *a = *b;
    *b = temp;
    
    cout << "After swapping:";
    cout << *a << " " << *b << endl;
    }

int main(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    swapNumbers(&a,&b);
    return 0;
}