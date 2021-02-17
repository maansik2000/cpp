#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* prev;
        node* next;

    node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }    
};


//create doubly linked list
void push(node** head, int val){
    (*head) == NULL;
    node* temp;

    node* newnode = new node(val);

    if((*head) == NULL){
        (*head) = temp = newnode;
    }else{
        temp -> next = newnode;
        newnode -> prev = temp;
        temp = newnode;
    }
    return;
}

void traverse(node** head){

    node* temp;
    temp = (*head);

    while (temp != NULL){
        cout<<temp -> data<< " ";
        temp = temp -> next;
    }
}

int main(){
    node* head = NULL;

    push(&head,5);
    push(&head,4);
    push(&head,8);
    push(&head,7);
    push(&head,3);
    push(&head,6);

    traverse(&head);
    return 0;
}