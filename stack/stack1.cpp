#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "Size of stack: " << st.size() << endl;
    cout << "Top element of stack is: " << st.top() << endl;
    st.pop();
    cout << "Top element after pop: " << st.top() << endl;
    cout << "Size of stack after pop: " << st.size() << endl;
    cout << "Is stack empty: " << st.empty() << endl;
    return 0;
}