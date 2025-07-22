//Fancy string leetproblem 1957, O(N) TC.
#include <iostream>
using namespace std;

string FancyString(string s){
    int freq = 1;
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (i > 0 && s[i] == s[i-1]) //freq++ at i>0 as what ever element exists at i = 0 has freq 1 and also to remove out of bound error.
        {
            freq++;
        }else{
            freq = 1; // if s[i] != s[i-1] then its a new character not a repeating one then it resets it to 1.
        }
        if (freq <= 2) //freq less than equal to 2 becoz to store all elements of a given word 
                       //ex. (l e e t c o d e) each element has freq less than or equal to 2.  
        {
            ans += s[i];
        }
        
    }
    return ans;
}

int main(){
    string word = "leeetcode";
    cout << FancyString(word) << endl;
    return 0;
}