//Max subarray sum by Kadane's algorithm.

#include <iostream>
using namespace std;

int main(){
    int currsum = 0;
    int maxsum = INT_MIN;
    int count = 7;
    int arr[7] = {3,-4,5,4,-1,7,8};
    for (int i = 0; i < count; i++)
    {
        currsum += arr[i];
        maxsum = max(currsum,maxsum);
        if (currsum < 0)
        {
            currsum = 0;
        }
    }
    cout << "Max subarray sum = " << maxsum << endl;
    
    return 0;
}