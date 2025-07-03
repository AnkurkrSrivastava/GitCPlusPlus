#include <iostream>
using namespace std;

int main(){
    int num = 111;
    int ans = 0;
    int len = to_string(num).length();
    for (int i = 0; i < len; i++)
    {
        int lastdigit = num%10;
        num /= 10 ;
        ans += lastdigit;
    }
    cout << ans << endl;
    
    return 0;
}