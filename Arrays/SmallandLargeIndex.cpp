#include <iostream>
using namespace std;

int main(){
     int arr[6] = {5,15,2,-1,67,7};
    int size = 6;
    int smallest = INT_MAX; // ---> +infinity
    int largest = INT_MIN; // ----> -infinity
    for (int i = 0; i < size; i++)
    {
        smallest = min(arr[i],smallest);
        largest = max(arr[i],largest);
    }
    for (int i = 0; i < size; i++)
    {
        if (smallest == arr[i])
        {
            cout << "Index of smallest--->" << i << endl; 
        }
        if (largest == arr[i])
        {
            cout << "Index of largest--->" << i << endl;
        }
    }
    
    return 0;
}