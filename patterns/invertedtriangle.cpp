#include <iostream>
using namespace std;

int main(){
    int count = 4;
    //int m = 1;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 4; j > i ; j--)
        {  
            cout << (i+1);
        }
        //m +=1;
        cout << endl; // Move to the next line after finishing a row
    }
    
    return 0;
}