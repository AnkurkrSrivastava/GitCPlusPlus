#include <iostream>
using namespace std;

class area{
    int length;
    int width;
    int radius;
    public:
        area(){
            radius = 5;
            cout << "area of circle: " << 3.14*5*5 << endl;
        }
        area(int length, int width){
            this -> length = length;
            this -> width = width;
            cout << "Area of rectangle: " << length*width << endl;
        }
};

int main(){
    area p1;
    area p2(5,6);
    return 0;
}