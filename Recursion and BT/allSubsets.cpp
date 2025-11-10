#include <iostream>
#include <vector>
using namespace std;

void allSubsets(vector<int> &arr, vector<int> &ans, int i) {
    if (i == arr.size())
    {
        for (int val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    //including
    ans.push_back(arr[i]);
    allSubsets(arr, ans, i+1);

    ans.pop_back();
    //excluding
    allSubsets(arr, ans, i+1);
    
}

int main(){
    vector<int> arr = {1,2,3};
    vector<int> ans;

    allSubsets(arr , ans, 0);
    return 0;
}