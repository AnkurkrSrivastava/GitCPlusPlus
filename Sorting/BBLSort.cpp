// O(N^2) TC
#include <iostream>
#include <vector>
using namespace std;

void BBLSort(vector<int> &arr,int count){
    for (int i = 0; i < count-1; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < count-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }   
        }
        if (!isSwap)
        {
            return;
        }   
    }
}

int main(){
    vector<int> num = {4,3,1,2};
    int n = 4;
    BBLSort(num,n);
    for (int x : num)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}