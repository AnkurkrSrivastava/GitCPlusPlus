#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int> &arr, int n, int m, int maxallowedpages)
{
    int students = 1;
    int pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxallowedpages)
        {
            return false;
        }
        if (pages + arr[i] <= maxallowedpages)
        {
            pages += arr[i];
        }
        else
        {
            pages = arr[i];
            students++;
        }
    }
    return students > m ? false : true;
}

int BookAlloc(vector<int> &arr, int n, int m)
{
    if (m > n)
    {
        return -1;
    }
    int st = 0;
    int sum = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isvalid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {2, 1, 3, 4};
    int m = 2;
    int n = 4;
    cout << BookAlloc(vec, n, m) << endl;
    return 0;
}