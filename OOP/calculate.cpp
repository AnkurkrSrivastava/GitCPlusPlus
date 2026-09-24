#include <iostream>
using namespace std;

class Student{
    string name;
    int marks[5];
    public:
        Student(){
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter 5 marks: ";
            for (int i = 0; i < 5; i++)
            {
                cin >> marks[i];
            }
        }
        void Calculate(){
            int total;
            for(int x : marks){
                total += x; 
            }
            cout << "Name: " << name;
            cout << "Total: " << total << endl;
            cout << "Average: " << total/5 << endl;
        }
        
};


int main(){
    Student s1;
    s1.Calculate();
    return 0;
}