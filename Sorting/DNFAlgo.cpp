//Dutch national flag algorithm for sort colors problem with O(N) TC in one pass with O(1) SC.
#include <iostream>
#include <vector>
using namespace std;

void SortColors(vector<int> &nums){
    int n = nums.size();
    int low = 0, mid = 0, high = n-1;
    while (mid<=high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
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