#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &arr, int target, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            return search(arr, target, st, mid - 1);
        }
        else
        {
            return search(arr, target, mid+1, end);
        }
    }
    return -1;
}

int BinSearch(vector<int> &arr, int target)
{
    int st = 0;
    int end = arr.size() - 1;
    return search(arr,target,st,end);
}

int main()
{
    vector<int> vec = {-1, 0, 3, 5, 8, 12};
    int tar = 5;
    cout << BinSearch(vec, tar) << endl;
    return 0;
}