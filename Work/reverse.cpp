#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int Num_reverse(int num){
    string count = to_string(num); //Number to integer
    reverse(count.begin(),count.end()); //Reversing
    int reversed = stoi(count); //Conversion to Integer
    return reversed;
}

int main(){
    int original = 123;
    cout << "Reversed-->" << Num_reverse(original) << endl;
    return 0;
}