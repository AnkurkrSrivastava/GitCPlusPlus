#include <iostream>
using namespace std;

class rectangle{
    int length;
    int width;
    public:
        rectangle(int l,int w){
            length = l;
            width = w;
        }
        void area(){
            int a;
            a = length*width;
            cout << "Area: " << a << endl;
        }
};

int main(){
    rectangle a1(5,6);
    rectangle a2(9,6);
    a1.area();
    a2.area();
    return 0;
}