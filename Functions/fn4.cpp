#include <iostream>
using namespace std;

int fibonacci(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    int a = 0, b = 1, next = 0;
    for (int i = 2; i <= n; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main(){
    int num;
    cout << "Enter the Nth (according to index) fibonacci number you want: ";
    cin >> num;
    cout << "The " << num << "th Fibonacci number is: " << fibonacci(num) << endl;
    return 0;
}