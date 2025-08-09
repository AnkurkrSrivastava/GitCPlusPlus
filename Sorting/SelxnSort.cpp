#include <iostream>
#include <vector>
using namespace std;

void SelxnSort(vector<int> &vec,int count){
    for (int i = 0; i < count-1; i++)
    {
        int smallestIdx = i;
        for (int j = i+1; j< count; j++)
        {
            if (vec[j]<vec[smallestIdx])
            {
                smallestIdx = j;
            }
        }
        swap(vec[i],vec[smallestIdx]);
    }
}

int main(){
    vector<int> num = {4,3,1,2};
    int n = 4;
    SelxnSort(num,n);
    for (int x : num)
    {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}