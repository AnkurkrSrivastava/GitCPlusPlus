#include <iostream>
using namespace std;

int main(){
    int count = 7;
    for (int i = 0; i < count; i++)
    {
        for (int j =i; j > i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 4; j++)
        {
            cout << "*";
        }
        cout << endl; // Move to the next line after finishing a row
        
        
    }
    
    return 0;
}