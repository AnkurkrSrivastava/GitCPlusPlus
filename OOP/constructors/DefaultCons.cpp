#include <iostream>
using namespace std;

class Wall{
    int length;
    int width;
    public:
        Wall(){
            length = 5;
            width = 6;
        }
        void calculateArea(){
            cout << length * width << endl;
        }
};

int main(){
    Wall p;
    p.calculateArea();
    return 0;
}