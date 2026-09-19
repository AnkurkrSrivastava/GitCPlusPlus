#include <iostream>
#include <string>
using namespace std;

class student{
    public:
        string name;
        int marks;
    void checkResult(){
        if (marks >= 40)
        {
            cout << name << " is Pass";
        }else{
            cout << name << " is fail";
        }
        
    }
};

int main(){
    student s;
    cin >> s.name;
    cin >> s.marks;
    s.checkResult();
    return 0;
}