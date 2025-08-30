#include <iostream>
#include <string>
using namespace std;

bool isValid(char ch)
{
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }
    return false;
}

bool ValidPalindrome(string s)
{
    int n = s.length();
    int st = 0;
    int end = n - 1;
    while (st < end)
    {
        if (!isValid(s[st]))
        {
            st++; continue;
        }
        if (!isValid(s[end]))
        {
            end--; continue;
        }
        

        if (tolower(s[st]) == tolower(s[end]))
        {
            st++;
            end--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str = "Ac3?e3c&a";
    cout << ValidPalindrome(str) << endl;

    return 0;
}