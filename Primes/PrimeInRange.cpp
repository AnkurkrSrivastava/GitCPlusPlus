#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int L = 10;
    int R = 20;
    int count = 0;
    vector<bool> isPrime(R + 1, true);
    for (int i = 2; i < R; i++)
    {
        for (int j = i * 2; j < R; j = j + i)
        {
            isPrime[j] = false;
        }
        if (i>L && isPrime[i])
        {
            count++;
        }
        
    }
    cout << count << endl;

    return 0;
}