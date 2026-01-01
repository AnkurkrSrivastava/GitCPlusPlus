#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) 
{
    vector<int> ans;
    for (int i = 0; i < nums.size()-1; i++)
    {
        if (nums[i+1] == nums[i])
        {
            // nums.erase(nums.begin()+(i+1));
            auto it = find(nums.begin(),nums.end(),(nums[i]-1));
            if (it != nums.end() || (nums[i]-1 == 0))
            {
                ans.insert(ans.begin(),(nums[i]+1));
                ans.insert(ans.begin(),nums[i]);
            }else{
                
                ans.insert(ans.begin(),(nums[i]-1));
                ans.insert(ans.begin(),nums[i]);
            }
            
            
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {2,3,2};
    vector<int> result = findErrorNums(vec);
    for (int x : result)
    {
        cout << x << " ";
    }
    
    return 0;
}