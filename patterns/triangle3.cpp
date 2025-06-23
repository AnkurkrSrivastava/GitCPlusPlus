#include <iostream>
using namespace std;

int main(){
    int count = 4;
    char m = 'A';
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << m << " ";
        }
        m += 1;
        cout << endl;
    }
    
    return 0;
}