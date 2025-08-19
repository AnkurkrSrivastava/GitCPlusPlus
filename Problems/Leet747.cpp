#include <iostream>
#include <vector>
using namespace std;

int LargestNoTwice(vector<int> &nums){
    int largest = 0;
    int ans = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        largest = max(largest,nums[i]);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (2*(nums[i]) <= largest || nums[i] == largest)
        {
            if (largest == nums[i])
            {
                ans = i;
            }
            
        }else{
            return -1;
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {0,0,0,1};
    cout << LargestNoTwice(vec) << endl;
    return 0;
}