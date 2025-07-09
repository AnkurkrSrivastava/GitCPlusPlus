#include <iostream>
using namespace std;

int main(){
    int arr[4] = {11,2,15,7};
    int count = 4;
    int target = 9;
    for (int i = 0; i < count; i++)
    {
        for (int j = i+1; j < count; j++)
        {
            if (arr[i]+arr[j] == target)
            {
                cout << arr[i] << "," << arr[j] << endl;
            }
        }
    }
    
    return 0;
}