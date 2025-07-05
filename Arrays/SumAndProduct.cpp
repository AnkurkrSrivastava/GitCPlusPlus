#include <iostream>
using namespace std;

void calculation(int arr[],int count){
    int sum = 0;
    int product = 1;
    for (int i = 0; i < count; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "Sum of all arrays:" << sum << endl;
    cout << "Prodct of all arrays:" << product << endl;
}

int main(){
    int n;
    cout << "Enter no. of arrays you want " << endl;
    cin >> n;
    int* arr = new int[n]; // Allocate array at runtime
    cout << "Enter elements of array :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    calculation(arr,n);
    
    delete[] arr; //free memory 
    return 0;
}