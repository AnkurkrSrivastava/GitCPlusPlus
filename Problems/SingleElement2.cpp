#include <iostream>
#include <vector>
using namespace std;
int SingleElement(vector<int> nums)
{
    int st = 0;
    int n = nums.size();
    int end = n-1;
    if(n==1) return nums[0]; // If there is only one element in an array ex.{1}.
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if(mid == 0 && nums[0] != nums[1]) return nums[mid]; //Checking edge case for mid becomes = 0
        if (mid == n-1 && nums[n-1] != nums[n-2]) //Checkng edge case for mid when it becomes = n-1.
        {
            return nums[mid];
        }
        
        if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1]) //checks for default case
        {
            return nums[mid];
        }
        if (mid % 2 == 0) //Checking if mid is on even index 
        {
            //Checks right existing single element
            if (nums[mid] == nums[mid - 1])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else //checks for if mid is on odd index
        {
            //Checks for left existing single element
            if (nums[mid] == nums[mid - 1])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> vec = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << SingleElement(vec) << endl;
    return 0;
}