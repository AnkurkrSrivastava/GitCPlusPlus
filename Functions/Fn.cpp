// This code calculates the factorial of a number using a function.

#include <iostream>
using namespace std;

int factN(int n){
    int fact = 1;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
         fact *= i;   
        }
        return fact;
    }
}

int main(){
    int m;
    cout << "Enter a number to find its factorial: ";
    cin >> m;
    cout << factN(m);
    
    return 0;
}