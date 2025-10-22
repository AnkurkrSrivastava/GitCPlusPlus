#include <iostream>
using namespace std;

int NSum(int num){
    if(num == 1){
        return 1;
    }
    return num + NSum(num-1);
}

int main(){
    cout << NSum(4) << endl;
    return 0;
}