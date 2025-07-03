#include <iostream>
#include <cmath>
using namespace std;

int BinaryToDec(int num){
    int ans = 0 , exponent = 0;
    int len = to_string(num).length();
    for (int i = 0; i < len; i++)
    {
        int power = pow(2,exponent);
        int lastdigit = num%10;
        num /= 10;
        ans += power * lastdigit; //2^pow X lastdigit adds up to final required number. 
        exponent += 1;
    }
    return ans;
    
}

int main(){
    int nUMBER = 101010;
    cout << BinaryToDec(nUMBER) << endl;
    return 0;
}