#include <iostream>
using namespace std;

int main(){
    int count = 4;
    for (int i = 0; i < count; i++)
    {
        for (int j = 4; j > i; j--)
        {
            cout << " ";
        }
        for (int j= 0; j <= i; j++)
        {
            cout << j+1;
        }
        cout << endl; // Move to the next line after finishing a row
    }
    
    return 0;
}