//Maximum subarray sum by brute force approach

#include <iostream>
using namespace std;

int main(){
    int count = 5;
    int arr[5] = {1,2,3,4,5};
    int MaxSum = INT_MIN;
    for (int st = 0; st < count; st++)
    {
        int currentsum = 0; //As initial iteration of starting point finishes it resets the value of current sum to 0.
        for (int end = st; end < count; end++)
        {
            currentsum += arr[end];
            MaxSum = max(currentsum,MaxSum);   //Kind of if statement in which if current sum is greater than Maxsum that value will be assigned to MaxSum.
        }
    }
    cout << "Max subarray sum = " << MaxSum << endl;
    
    return 0;
}