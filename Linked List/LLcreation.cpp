#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void transverse(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    
}

int main(){
    Node* first = new Node;
    Node* second = new Node;
    Node* third = new Node;
    first -> data = 10;
    first -> next = second;

    second -> data = 20;
    second -> next = third;

    third -> data = 30;
    third -> next = NULL;
    
    transverse(first);
}