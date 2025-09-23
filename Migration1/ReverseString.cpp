// hello ---> olleh

#include <iostream>
using namespace std;

string reverse(string word){
    int st = 0;
    int end = word.size()-1;
    while (st <= end)
    {
        swap(word[st],word[end]);
        st++;
        end--;
    }
    return word;
    
}

int main(){
    string str = "hello";
    cout << reverse(str) << endl;
    return 0;
}