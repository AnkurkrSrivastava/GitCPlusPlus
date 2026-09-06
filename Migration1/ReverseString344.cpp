#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char> &s){
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        swap(s[i],s[n-1]);
        n = n-1;
    }
}

int main(){
    vector<char> in = {'h','e','l','l','o'};
    reverseString(in);
    for (char x : in)
    {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}