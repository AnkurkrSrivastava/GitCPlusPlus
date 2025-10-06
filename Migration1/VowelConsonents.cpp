#include <iostream>
#include <utility>
using namespace std;

void VowelConsonents(string str, int &vowels, int &consonants){
    vowels = 0;
    consonants = 0;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = tolower(str[i]);
        if (ch == ' ')
        {
            continue;
        }

        if (ch == 'a'|| ch == 'e' ||ch == 'i'||ch == 'o' || ch =='u')
        {
            vowels++;
        }
        else if (isalpha(ch))
        {
            consonants++;
        }
    } 
}

int main(){
    string str = "hello world";
    int v,c;
    VowelConsonents(str,v,c);
    cout << "Vowels: "  << v << endl;
    cout << "Consonants: "<< c << endl; 
    return 0;
}