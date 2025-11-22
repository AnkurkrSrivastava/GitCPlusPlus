#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int freq = 0;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            ans += 1;
            freq = max(freq,ans);
        }
        else{
            ans = 0;
        }
        
    }
    return freq;
}

int main()
{
    vector<int> vec = {1,1,0,1,1,1};
    cout << findMaxConsecutiveOnes(vec) << endl;
    return 0;
}