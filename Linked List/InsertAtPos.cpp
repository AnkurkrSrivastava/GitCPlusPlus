#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

// void insertbeginning(Node* &head, int value){
//     Node* newNode = new Node;
//     newNode -> data = value;
//     newNode -> next = head;
//     head = newNode;
// }

void insertatpos(Node* &head, int value, int pos){
    Node* newNode = new Node;
    newNode -> data = value;
    newNode -> next = NULL;

    if (pos == 1)
    {
        newNode -> next = head;
        head = newNode;
        return;
    }
    

    Node* temp = head;
    for (int i = 1; i < pos-1; i++)
    {
        temp = temp -> next;
    }
    newNode -> next = temp -> next;
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
    insertatpos(first,15,2);
    transverse(first);
    return 0;
}