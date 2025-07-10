#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,2,1,2};
    int freq = 0;
    int ans = 0;
    int count = arr.size();
    for (int i = 0; i < count; i++)
    {
        if (freq == 0)
        {
            ans = arr[i];
        }
        if (ans == arr[i])
        {
            freq++;
        }else{
            freq--;
        }
    }
    cout << "Majority existing no. is = " << ans << endl;
    
    return 0;
}