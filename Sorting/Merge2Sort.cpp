//Leetcode problem 88, with O(m+n) TC and O(1) SC
#include <iostream>
#include <vector>
using namespace std;

void Merge2Sort(vector<int> &A, vector<int> &B, int m, int n){
    int idx = A.size() - 1;
    int i = m-1;
    int j = n-1;
    while (i>=0 && j>=0)
    {
        if (B[j]>=A[i])
        {
            A[idx] = B[j];
            idx--;
            j--;
        }else{
            A[idx] = A[i];
            idx--;
            i--;
        }   
    }
    while (j>=0)
    {
        A[idx] == B[j];
        idx--;
        j--;
    }
    
}

int main(){
    vector<int> vec1 = {1,2,3,0,0,0};
    vector<int> vec2 = {2,5,6};
    int m = 3;
    int n = 3;
    Merge2Sort(vec1,vec2,m,n);
    for (int num : vec1)
    {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}