#include <iostream>
using namespace std;

int main(){
    int count = 4;
    for (int i = 0; i < count; i++)
    {
        for (int j = i+1; j > 0; j--)
        {
            cout << j;
        }
      
        for (int j = 4; j > i; j--)
        {
            cout << " ";
        }
        for (int j = 4; j > i; j--)
        {
            cout << " ";
        }
        int k = 1;
        for (int j = i+1; j > 0; j--)
        {
            cout << k;
            k+=1;
        }
        
        
        cout << endl; // Move to the next line after finishing a row
    }
    
    return 0;
}