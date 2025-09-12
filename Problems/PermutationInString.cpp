//Leetcode problem 576

#include <iostream>
using namespace std;

bool isFreqSame(int freq1[], int freq2[]){
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }
    return true;
}

bool Permutation_In_String(string s1, string s2){
    int freq[26] = {0};
    for (int i = 0 ; i < s1.length(); i++)
    {
        int idx = s1[i] - 'a'; //a --> 0, b -->1
        freq[idx]++;
    }

    int windsize = s1.length();
    for (int i = 0; i < s2.length(); i++)
    {
        int windidx = 0;
        int idx = i;
        int windfreq[26] = {0};
        while (windidx < windsize && idx < s2.length())
        {
            windfreq[s2[idx]-'a']++;
            windidx++; idx++;   
        }

        if(isFreqSame(freq, windfreq)){
            return true;
        }
    }
    return false;
    
}

int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";
    cout << Permutation_In_String(s1,s2) << endl;
    return 0;
}