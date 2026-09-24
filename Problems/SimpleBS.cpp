#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        
    }
    
}

int main() {
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int key;

    cin >> key;

    int result = binarySearch(arr, 6, key);

    if(result != -1)
        cout << "Found at index " << result;
    else
        cout << "Not Found";

    return 0;
}