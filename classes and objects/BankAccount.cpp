#include <iostream>
using namespace std;

class bankAccount{
    public:
        string name;
        double balance;
        void deposit(double amtd){
            balance += amtd; 
        }

        void withdraw(double amtw){
            if (amtw <= balance)
            {
                balance = balance - amtw;
            }else{
                cout << "Insufficient balance" << endl;
            }
            
        }

        void display(){
            cout << "Balance is: " << balance;
        }
};

int main(){
    bankAccount b;
    cout << "Enter name and balance" << endl;
    cin >> b.name;
    cin >> b.balance;
    cout << "Enter deposit and withdraw amount" << endl;
    double dep;
    double with;
    cin >> dep;
    cin >> with;
    b.deposit(dep);
    b.withdraw(with);
    b.display();
    return 0;
}