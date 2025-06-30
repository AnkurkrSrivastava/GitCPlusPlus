#include <iostream>
#include <cmath> 
using namespace std;

void prime(int n){
    if (n <= 1)
    {
        cout << n << " is a not a prime number." << endl; 
    }
    for (int i = 2; i < sqrt(n)+1; i++)
    {
        if (n%i == 0)
        {
            cout << n << " is not a prime number." << endl;
            return;
        }
    }
    cout << n << " is a prime number." << endl;
}

int main(){
    int num;
    cout << "Enter a number to check if it is prime: ";
    cin >> num;
    prime(num);
    return 0;
}