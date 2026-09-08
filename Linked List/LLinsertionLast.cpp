#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insertLast(Node* &head, int value){
    Node* newNode = new Node;
    newNode -> data = value;
    newNode -> next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    

    Node* temp = head;
    while (temp-> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = newNode;
    
}

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
    insertLast(first,15);
    transverse(first);
    return 0;
}