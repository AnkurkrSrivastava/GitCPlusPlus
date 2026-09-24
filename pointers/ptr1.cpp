#include <iostream>
using namespace std;

int main(){
    int largest = INT16_MIN;
    int smallest = INT16_MAX;
    int arr[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int *p = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << *(p+i) << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        largest = max(*(p+i),largest);
        smallest = min(*(p+i),smallest);
    }
    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
    
    
    return 0;
}