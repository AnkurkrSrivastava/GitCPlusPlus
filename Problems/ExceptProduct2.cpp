// Leetcode problem 238, Time Complexity is O(n)

#include <iostream>
#include <vector>
using namespace std;

vector<int> ExceptProduct(vector<int> nums){
    vector<int> answer(nums.size(),1);
    int prefix = 1;
    int suffix = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        answer[i] = prefix;
        prefix *= nums[i];
    }
    
    for (int j = nums.size()-1; j >= 0; j--)
    {
        answer[j] *= suffix;
        suffix *= nums[j];
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