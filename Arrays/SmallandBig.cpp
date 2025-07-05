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
    cout << "Smallest No. = " << smallest << endl;
    cout << "Largest No. = " << largest << endl;
    
    return 0;
}