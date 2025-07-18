//Peak mountain index no. Leet Problem 852, O(N) TC
#include <iostream>
#include <vector>
using namespace std;

int peakIndex(vector<int> arr){
    int n = arr.size();
    int st = 0;
    int end = n-1;
    while (st<=end)
    {
        int mid = st + (end-st)/2;
        if (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
        {
            return mid;
        }
        if (arr[st] <= arr[mid])
        {
            st++;
        }else{
            end--;
        }
    }
    return -1;
}

int main(){
    //test cases
    //vector<int> vec = {1,0,0}; ---> Not a valid test case because it is not valid a mountain first increases then decreases
    vector<int> vec = {3,5,3,2,0};
    //vector<int> vec = {1,7,5,4,3,0};
    //vector<int> vec = {1,2,5,6,4,0};
    //vector<int> vec = {1,2,3,4,5,0};
    cout << peakIndex(vec) << endl;
    return 0;
}