#include <iostream>
using namespace std;

int main(){
    int count = 4;
    for (int i = 0; i < count; i++)
    {
        // Print leading spaces
        for (int j = 4; j > i ; j--)
        {
            cout << " ";
        }
        // Print increasing numbers from 1 to i+1
        for (int j = 0; j <= i; j++)
        {
            cout << j+1;
        }
        // Print decreasing numbers from i to 1
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        
        cout << endl; // Move to the next line after finishing a row
    }
    
    return 0;
}