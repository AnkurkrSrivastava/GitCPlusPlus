#include <iostream>
#include <vector>
using namespace std;

void SortColors(vector<int> &nums){
    int count = nums.size();
    int minVal = 0;
    for (int i = 0; i < count; i++)
    {
        for (int j = i+1; j < count; j++)
        {
            minVal = min(nums[i],nums[j]);
            if (minVal == nums[j])
            {
                swap(nums[i],nums[j]);
            }
        }
    }
}

int main(){
    vector<int> vec = {2,0,2,1,1,0};
    SortColors(vec);
    for (int x : vec)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}