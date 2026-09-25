#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int st = 0;
    int end = n-1;
    while (st <= end)
    {
        int mid = st+(end-st)/2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return -1;
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