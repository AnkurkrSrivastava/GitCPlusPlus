#include <iostream>
#include <vector> 
using namespace std;

int maxSumDivThree(vector<int>& nums) {
    int result = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        int pt = nums[i];
        int sum = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (pt != nums[j])
            {
                sum += nums[j];
            }
            else
            {
                continue;
            }
            if (sum%3==0)
            {
                result = max(sum,result);
            }
        }
    }
    return result;
}

int main(){
    vector<int> vec = {3,6,5,1,8};
    cout << maxSumDivThree(vec) << endl;
    return 0;
}