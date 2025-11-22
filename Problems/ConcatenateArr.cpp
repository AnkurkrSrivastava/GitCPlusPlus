#include <iostream>
#include <vector>
using namespace std;

    vector<int> getConcatenation(vector<int>& nums) {
        nums.insert(nums.end(),nums.begin(),nums.end());
        return nums;
    }

int main()
{
    vector<int> vec = {1, 2, 3};
    vector<int> returnedvec = getConcatenation(vec);
    for(int x : returnedvec){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}