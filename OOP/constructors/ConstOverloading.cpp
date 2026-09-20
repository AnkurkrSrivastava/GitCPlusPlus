#include <iostream>
using namespace std;

class student{
    string name;
    int marks;
    public:
        student(){
            name = "unknown";
            marks = 0;
        }
        student(string n,int m){
            name = n;
            marks = m;
        }
        void display(){
            cout << name << " " << marks << endl;
        }
};

int main(){
    student s1;
    student s2("Ankur", 85);
    s1.display();
    s2.display();
    return 0;
}