#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

int Compress(vector<string> chars)
{
    int count = chars.size();
    int freq = 0;
    set<string> uniqueSet(chars.begin(), chars.end());
    vector<string> ans(uniqueSet.begin(), uniqueSet.end());
    for (int i = 0; i < count; i++)
    {
        if (i < count-1 && chars[i] == chars[i + 1])
        {
            freq += 1;
        }
        if (i < count-1 && chars[i] != chars[i+1])
        {
            freq = 0;
        }
    }
    ans.push_back(to_string(freq));
    
    return ans.size();
}

int main()
{
    vector<string> chars = {"a", "a", "b", "b", "c", "c", "c"};
    cout << Compress(chars) << endl;
    return 0;
}