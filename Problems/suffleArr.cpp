#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int> &nums, int n)
{
    int st = 0;
    int end = n;
    vector<int> arr;
    while (st != n)
    {
        arr.push_back(nums[st]);
        arr.push_back(nums[end]);
        st += 1;
        end += 1;
    }
    return arr;
    
}

int main()
{
    vector<int> vec = {2,5,1,3,4,7};
    vector<int> result = shuffle(vec,3);
    for(int x : result) {
        cout << x << " ";
    }
    return 0;
}