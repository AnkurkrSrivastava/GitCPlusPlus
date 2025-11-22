// Leetcode problem 3354

#include <iostream>
#include <vector>
using namespace std;

int countValidSelections(vector<int> &arr)
{
    int curr = 0;
    int sum = 0;
    int left = 0;
    for (int i = 0; i < arr.size()-1; i++)
    {
        sum += arr[i]; 
    }
    
    for (int i = 0; i < arr.size() - 1; i++)
    {
        left += arr[i];

        if (arr[i] == 0 && 2 * left == sum)
        {
            curr = i;
        }
    }
    
    
}

int main()
{
    vector<int> vec = {1, 0, 2, 0, 3};
    cout << countValidSelections(vec) << endl;
    return 0;
}