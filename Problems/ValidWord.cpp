//Leetcode problem 3136 O(N) TC.

#include <iostream>
#include <cctype> //checks lower, upper and digits.
#include <string>
using namespace std;

bool Validword(string word)
{
    bool hasVowel = false;
    bool hasConsonant = false;
    bool hasalpha = false;
    int count = word.length(); // checks lenght of whole string.
    if (count < 3)
    {
        return false;
    }
    
    for (int i = 0; i < count; i++)
    {
        char ch = word[i];
        if (isalpha(ch)) // isalpha checks for if its a letter
        {
            hasalpha = true; // Alphabet checked by isalpha.
            char lowerCh = tolower(ch); // conversion to lowercase of a uppercase character for ease of cheking vowel.
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u')
            {
                hasVowel = true;
            }
            else
            {
                hasConsonant = true;
            }
        }
        else if (!isdigit(ch)) // checks for special signs. 
        {
            return false;
        }
    }
    return hasVowel && hasConsonant; //returs true
    
}

int main()
{
    string str = "aya";
    cout << boolalpha << Validword(str);
    return 0;
}