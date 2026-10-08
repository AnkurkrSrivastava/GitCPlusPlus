#include <iostream>
using namespace std;

class stackImp{
    int st[10];
    int top;
    public:
        stackImp(){
            top = -1;
        }
        void push(int x){
            if (top == 9)
            {
                cout << "Stack Overflow" << endl;
                return;
            }
            top++;
            st[top] = x;
            
        }
        void pop(){
            if (top == -1)
            {
                cout << "Stack Underflow" << endl;
                return;
            }
            top--;
        }
        int peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }

        return st[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {

    stackImp st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.peek() << endl;

    st.pop();

    cout << "Top element after pop: " << st.peek() << endl;
    st.push(50);
    cout << "Top element after push after pop: " << st.peek() << endl;
    st.pop();
    st.pop();

    cout << "Is stack empty? " << st.isEmpty() << endl;

    return 0;
}