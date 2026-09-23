#include <iostream>
using namespace std;

class Car{
    string name;
    public:
        Car(string name){
            this -> name = name;
            cout << name << " Car created" << endl; 
        }
        ~Car(){
            cout << name << " Car destroyed" << endl;
        }
};

int main(){
    Car c1("BMW");
    Car c2("Audi");
    cout << "Cars are being used" << endl;
    return 0;
}