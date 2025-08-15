#include <iostream>
#include <vector>
using namespace std;

int RunnerUp(vector<int> &arr)
{
    // sort(arr.begin(),arr.end());
    int count = arr.size();
    int first = INT_MIN; //---> -INFINITY
    int second = INT_MIN;
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
            
        }
        else if(arr[i] != first && arr[i] > second){
            second = arr[i];
        }
    }
    return second;
}

int main()
{
    vector<int> vec = {3, 2, 6, 6, 6};
    cout << RunnerUp(vec) << endl;
    return 0;
}