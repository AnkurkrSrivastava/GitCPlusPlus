#include <iostream>
#include <vector>
using namespace std;

int MajoritySum(vector<int> nums)
{
    int count = nums.size();
    for (int val : nums)
    {
        int freq = 0;
        for (int element : nums)
        {
            if (element == val)
            {
                freq++;
            }
        }
        if (freq > count / 2)
        {
            return val;
        }
    }
}

    int main()
    {
        vector<int> arr = {3, 2, 3, 2, 2};
        cout << MajoritySum(arr) << endl;
        return 0;
    }