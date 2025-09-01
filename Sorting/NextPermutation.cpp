#include <iostream>
#include <vector>
using namespace std;

void NextPermutation(vector<int> &nums){
    int pivot = 0;
    int n = nums.size();
    
    for (int i = n-2; i>=0; i--)
    {
        if (nums[i] < nums[i+1])
        {
            pivot = i;
            break;
        }
    }
    for (int i = n-1; i>pivot; i--)
    {
        if (nums[i] > nums[pivot])
        {
            swap(nums[i],nums[pivot]);
            break;
        }
    }
    int i = pivot + 1;
    int j = n-1; 
    //reverse(nums.begin()+pivot + 1,nums.end());
    while (i<=j)
    {
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
}

int main(){
    vector<int> vec = {1,1,5};
    NextPermutation(vec);
    for (int x : vec)
    {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}