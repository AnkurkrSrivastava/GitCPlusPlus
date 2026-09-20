//this is a pointer that points to the current object.
//The -> operator is used to access a member through a pointer.
#include <iostream>
using namespace std;

class Car{
    string brand;
    int speed;
    public:
        Car(string brand, int speed){
            this->brand = brand;
            this->speed = speed;
        }
        void display(){
            cout << "Brand: " << brand << endl;
            cout << "Speed: " << speed << endl;
        }
};

int main(){
    Car c1("BMW", 120);
    Car c2("MTV", 130 );
    c1.display();
    c2.display();
    return 0;
}