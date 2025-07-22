//Leet problem 540, Single element in a sorted array. O(N) TC.
#include <iostream>
#include <vector>
using namespace std;

int SingleElement(vector<int> arr){
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if ((i == 0 && arr[i] != arr[i+1]) // checks edge case when i = 0....Becoz to prevent of out of bound error
            || (i == n-1 && arr[i] != arr[i-1]) // checks edge case when i = n-1...Becoz to prevent out of bound error 
            || (arr[i] != arr[i+1] && arr[i] != arr[i-1])
        ){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    vector<int> vec = {1,1,2,2,3,3,4,4,8};
    cout << SingleElement(vec) << endl;
    return 0;
}