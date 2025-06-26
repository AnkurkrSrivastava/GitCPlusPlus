#include <iostream>
using namespace std;

int main(){
    int count =  4;
    for (int i = 0; i < count; i++)
    {
        char m = 'A'+i;
        for (int j = 0; j <= i; j++)
        {   
            cout << char(m-j) << " ";
        }   
        cout << endl;
    }
    
    return 0;
}