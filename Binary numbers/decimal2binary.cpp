#include <iostream>
using namespace std;

int decTobinary(int num){
    int ans = 0, pow =1;
    while (num>0)
    {
        int rem = num%2;
        num /= 2;
        
        ans += (rem*pow); //(remainderXpower)gives the sum of numbers alltogether like in number system ones,tens,hundreth place.
        pow *= 10;
    }
    return ans;
    
}

int main(){
    int decNum = 7;
    cout << decTobinary(decNum) << endl;
    return 0;
}