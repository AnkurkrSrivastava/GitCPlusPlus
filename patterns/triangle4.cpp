#include <iostream>
using namespace std;

int main(){
    int count = 4;
    for (int i = 0; i < count; i++)
    {
        int m = 1; // Reset m for each row
        for (int j = 0; j <= i ; j++)
        {
            cout << m << " ";
            m += 1; // Increment m for each column in the row
        }
        cout << endl; // Move to the next line after finishing a row
        
    }
    
    return 0;
}