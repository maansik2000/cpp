#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node* prev;

        node(int val){
            data = val;
            next = NULL;
            prev = NULL;
        }
};


void insertAtHead(node** head, int val){

    node* newnode = new node(val);

    newnode -> next = (*head);

    if((*head) != NULL){
        (*head) -> prev = newnode;
    }

    (*head) = newnode;
}


void insertAtTail(node** head, int val){

    if((*head) == NULL){
        insertAtHead(head, val);
        return;
    }
    node* newnode = new node(val);
    node* temp = (*head);

    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = newnode;
    newnode -> prev = temp;
}


void display(node** head){
    node* temp;
    temp = (*head);
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    node* head = NULL;

    insertAtTail(&head,1);
    insertAtTail(&head,2);    
    insertAtTail(&head,3);    
    insertAtTail(&head,4);    
    insertAtTail(&head,5);    
    insertAtTail(&head,6);    

    display(&head);

    insertAtHead(&head,154);
    display(&head);
    
    return 0;
}