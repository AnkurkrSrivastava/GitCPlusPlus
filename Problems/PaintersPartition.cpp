#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int> &arr, int n, int m, int AllowedTime)
{
    int painters = 1;
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > AllowedTime)
        {
            return false;
        }
        if (time + arr[i] <= AllowedTime)
        {
            time += arr[i]; 
        }else{
            time = arr[i];
            painters++;
            
        }
    }
    return painters>m ? false:true;
}

int painterpartion(vector<int> &arr, int n, int m)
{
    if (m > n)
    {
        return -1;
    }
    int ans = -1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int st = 0;
    int end = sum;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isvalid(arr, n, m, mid))
        {
            ans = mid;
            end = mid-1;
        }else{
            st = mid+1;
        }
    }
    return ans;
}

int main()
{
    vector<int> board = {10, 10, 10, 10};
    int n = 4;
    int m = 2;
    cout << painterpartion(board,n,m) << endl;
    return 0;
}