#include <iostream>
using namespace std;

class Q{
    static const int SIZE = 10;
    int q[SIZE];
    int st;
    int end;
    public:
        Q(){
            st = -1;
            end = -1;
        }
        void push(int val){
            if (end == SIZE-1)
            {
                cout << "Queue Overflow" << endl;
                return;
            }
            if (st == -1)
            {
                st = 0;
            }
            end++;
            q[end] = val;
        }
        void pop(){
            if (st == -1 || st > end)
            {
                cout << "Queue Underflow" << endl;
                return;
            }
            cout << "Removed: " << q[st] << endl;
            st++;
        }
        void display(){
            if (st == -1 || st > end)
            {
                cout << "Queue is empty" << endl;
            }
            for (int i = 0; i <= end; i++)
            {
                cout << q[i] << " ";
            }
            cout << endl;
        }
};

int main(){
    Q queue;
    queue.push(5);
    queue.push(6);
    queue.push(7);
    cout << "Queue elements: ";
    queue.display();
    queue.pop();
    cout << "Queue after pop: ";
    queue.display();
    return 0;
}