#include <iostream>
using namespace std;

void swapping(int arr[],int size){
    int smallest = INT_MAX, largest = INT_MIN;
    int indexsmall = -1,indexlarge = -1;
    for (int i = 0; i < size; i++)
    {
        smallest = min(arr[i],smallest);
        largest = max(arr[i],largest);
    }
    for (int i = 0; i < size; i++)
    {
       if(smallest == arr[i])
       {
        indexsmall = i;
       }
       if (largest == arr[i])
       {
        indexlarge = i;
       }
       
    }
    if (indexsmall != -1 && indexlarge != -1)
    {
        swap(arr[indexlarge],arr[indexsmall]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    
}

int main(){
    int arr[] = {1,2,-5,12,64};
    int sz = 5;
    swapping(arr,sz);
    return 0;
}