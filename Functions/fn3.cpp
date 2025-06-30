#include <iostream>
#include <cmath>
using namespace std;
bool prime(int num){
    if (num <= 1)
    {
        return false; // Not a prime number
    }
    for (int i = 2; i < sqrt(num); i++)
    {
        if (num%i == 0)
        {
            return false; // Not a prime number
        }
    }
    return true; // Is a prime number
}
void printprimes(int n){
    for (int i = 2; i < n; i++)
    {
        if (prime(i))
        {
            cout << i << " ";
        }
    }
    
}


int main(){
    int num;
    cout << "Enter a number upto which prime numbers you want :";
    cin >> num;
    printprimes(num);    
    return 0;
}