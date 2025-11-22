#include <iostream>
#include <vector>
using namespace std;

int minimumOperations(vector<int> &nums)
{
    int freq = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i]%3 != 0)
        {
            freq += 1;
        }
    }
    return freq;
}

int main()
{
    vector<int> vec = {1,2,3,4};
    cout << minimumOperations(vec) << endl;
    return 0;
}