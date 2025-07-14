// Leetcode problem 238 by brute force approach Time Complexity is O(n^2)

#include <iostream>
#include <vector>
using namespace std;

vector<int> ExceptProduct(vector<int> nums){
    vector<int> answer(nums.size(),1);
    for (int i = 0; i < nums.size(); i++)
    {
        int product = 1;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] != nums[j])
            {
                product *= nums[j];
            }
        }
        answer[i] = product;
    }
    return answer;
}

int main(){
    vector<int> vec = {1,2,3,4};
    vector<int> result = ExceptProduct(vec); 
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}