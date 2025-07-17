//Binary search in rotated sorted array, LeetCode problem 33.

#include <iostream>
#include <vector>
using namespace std;

int RotatedBS(vector<int> arr, int target)
{
    int n = arr.size();
    int st = 0;
    int end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[st] <= arr[mid])
        {
            if (arr[st] <= target && target <= arr[mid])
            {
                end = mid-1;
            }else{
                st = mid + 1;
            }
        }else{
            if (arr[mid] <= target && target <= arr[end])
            {
                st = mid+1;
            }else{
                end = mid-1;
            }
            
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {3,4,5,6,7,0,1,2};
    int tar = 0; 
    cout << RotatedBS(vec,tar) << endl;
    return 0;
}