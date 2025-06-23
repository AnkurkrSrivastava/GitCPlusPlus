#include <iostream>
using namespace std;

int main()
{
    int count = 4;// Initialize m outside the loop to keep it constant for all rows
    for (int i = 0; i < count; i++)
    {
        for (int j = i+1 ; j >0 ; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}