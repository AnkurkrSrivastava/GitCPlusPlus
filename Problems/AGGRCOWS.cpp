#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int> arr,int n,int c,int platform){
    
}

int AggrCows(vector<int> arr,int n,int c){
    if (c>n)
    {
        return -1;
    }
    int st = 0;
    int end = 0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        end = max(arr[i],end);
    }
    while (st<=end)
    {
        int mid = st+(end-st)/2;
        if (isvalid(arr,n,c,mid))
        {
         ans = mid;
         st = mid+1;   
        }else{
            end = mid-1;
        }
        
    }
    
    
    
}

int main(){
    vector<int> vec = {1,2,8,4,9};
    int n = 5;
    int c = 4;
    return 0;
}