#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largestPerimeter(vector<int> &nums)
{
    int st = 0;
    // int end = nums.size() - 1;
    int perimeter = 0;
    int large_p = INT_MIN;

    sort(nums.begin(), nums.end(), greater<int>());


    for (int i = 1; i < nums.size(); i++)
    {
        if (i < nums.size()-1 && nums[st] + nums[i] > nums[i + 1] && nums[st] + nums[i + 1] > nums[i] && nums[i] + nums[i + 1] > nums[st])
        {
            perimeter = nums[st] + nums[i] + nums[i + 1];
            
            st++;
        }
        else{
            st++;
        }
        if (perimeter > large_p)
        {
            large_p = perimeter;
        }
    }

    return large_p;
}

int main()
{
    vector<int> num = {1,2,1,10};
    cout << largestPerimeter(num) << endl;
    return 0;
}