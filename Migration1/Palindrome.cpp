//Input: "A man a plan a canal Panama"
//Output: true

#include <iostream>
using namespace std;

bool Palindrome(string str){
    int j = 0;
    for (int i = 0; i<str.length(); i++)
    {
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }
    str.resize(j);
    int st = 0;
    int end = str.size()-1;

    while (st < end)
    {
        str[st] = tolower(str[st]);
        str[end] = tolower(str[end]);
        if (str[st] == str[end]){
            st++;
            end--;
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    string str = "A man a plan a canal Panama";
    cout << Palindrome(str) << endl;
    return 0;
}