#include <iostream>
using namespace std;

class multiplication{
    public:
        void game(int number){
            int p = 1;
            int i = 1;
            while (p<number)
            {
                p *= i;
                i++;
            }
            i--;
            char winner = (i%2 == 0)?'M' : 'J';
            if (winner == 'M')
            {
                cout << number << "Michael wins";
            }else{
                cout << number << "John wins";
            }
        }
};

int main(){
    
    return 0;
}