#include <iostream>
using namespace std;


int BinaryExpo(double x , int n){
    long long power = n;
    if (n<0)
    {
        x = 1/x;
        power = -power;
    }

    double ans = 1.0;

    while (power > 0)
    {
        if (power % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        power /= 2;
    }
    return ans;
     
}


int main(){
    int base = 3;
    int exponent = 5;
    cout << "Binary Exponentiation = " << BinaryExpo(base,exponent) << endl;
    return 0;
}