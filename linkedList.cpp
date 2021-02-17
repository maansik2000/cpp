#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
};

//push element to the list

void push(node** head){

    int n;
    node *newnode,*temp;

    do{
        newnode = new node();

        cout<<"enter the data"<<endl;
        cin>>newnode->data;

        newnode->next=NULL;

        if((*head) == NULL){
            (*head) = temp = newnode;
        }else{
            temp -> next = newnode;
            temp = newnode;
        }
        cout<<"enter the choice, -1 to exit"<<endl;
        cin>>n;

    }while(n!=-1);
}

//insert at front

void insertAtfront(node** head,int data){
    node* newnode = new node();

    newnode -> data = data;
    newnode -> next = (*head);
    (*head) = newnode;

}


//insert at end

void insertAtEnd(node** head, int data){

    node *newnode,*temp = *head;
    
    newnode = new node();

    newnode -> data = data;
    newnode -> next = NULL;

    if(*head == NULL){
        *head = newnode;
        return;
    }

    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = newnode;
    return;
}


//insert at mid
void insertAtmid(node** head, int data,int pos){
    node *temp,*newnode;
    int count=0,i=0;

        temp = (*head);

        while(i < pos){
            temp = temp -> next;
            i++;
        }

        newnode = new node();
        newnode -> data = data;
        newnode -> next = NULL;

        newnode -> next = temp -> next;
        temp -> next = newnode;
        return;
}

//deletion

void deletion(node** head,int key){

    node* temp = (*head);
    node* prev = NULL;

    if(temp != NULL && temp -> data == key){
        *head = temp -> next;
        delete temp;
        return;
    }

    while(temp != NULL && temp -> data != key){

        prev = temp;
        temp = temp -> next;

    }

    if(temp == NULL){
        return;
    }

    prev -> next = temp -> next;
    delete temp;
    
}

//print the element
void traverse(node* num){
    while(num != NULL){
        cout<<num->data<<" ";
        num=num->next;
    }
}

int main(){

    node *head,*temp;
    head = NULL;
    
    int pos,key;

    push(&head);
    temp = head;
    traverse(temp);
    // insertAtEnd(&head,10);

    cout<<"enter the pos"<<endl;
    cin>>pos;

    insertAtmid(&head,15,pos);
    // deletion(&head, key);

    temp = head;
    traverse(temp);
    
    return 0;
}