#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> &arr, int tar){
    int st = 0;
    int end = arr.size()-1;
    while (st<=end)
    {
        int mid = st + (end-st)/2;
        if (tar > arr[mid])
        {
            st = mid + 1;
        }else if(tar < arr[mid]){
            end = mid-1;
        }else{
            return mid;
        }
        
    }
    return -1;
}

int main(){
    vector<int> num = {-1,0,3,5,9,12};
    int target = 5;
    cout << BinarySearch(num, target) << endl;
    return 0;
}