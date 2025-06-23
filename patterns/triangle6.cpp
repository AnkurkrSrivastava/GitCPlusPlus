#include <iostream>
using namespace std;

int main(){
    int count = 4;
    char m = 'A';
    for (int i = 0; i < count; i++)
    {
        for (int j = i+1; j >0; j--)
        {
            cout << m << " ";   
        }
        m+=1;
        cout << endl; // Move to the next line after finishing a row
        
    }
    
    return 0;
}