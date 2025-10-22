#include <iostream>
using namespace std;

int Nfactorial(int num){
    if (num == 0)
    {
        return 1;
    }
    
    return num * Nfactorial(num-1);
    
}

int main(){
    cout << Nfactorial(4) << endl;
    return 0;
}