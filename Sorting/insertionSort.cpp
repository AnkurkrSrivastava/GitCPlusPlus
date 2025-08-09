#include <iostream>
#include <vector>
using namespace std;

void InsetionSort(vector<int> &arr, int count)
{
    for (int i = 1; i < count; i++)
    {
        int prev = i-1;
        int current = arr[i];
        while (prev >= 0 && arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev+1] = current;
    }
}

int main()
{
    vector<int> nums = {4, 1, 3, 2};
    int count = 4;
    InsetionSort(nums, count);
    for (int x : nums)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}