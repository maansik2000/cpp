#include<iostream>
using namespace std;
//stack using linked list

class Node{
    public:
        int data;
        Node* next;
};

Node* top = NULL;

void push(int val){
    Node* newnode = new Node();
    newnode->data = val;
    newnode->next = top;
    top = newnode;
}

void pop(){
    if(top == NULL){
        cout<<"stack underflow"<<endl;
    }else{
        int x = top->data;
        cout<<"the popped element is"<<" "<<x<<endl;
    }
}

void display(){
    Node* ptr;
    if(top == NULL){
        cout<<"stack is empty"<<endl;
    }else{
        ptr = top;
        cout<<"the stack element are"<<endl;
        while(ptr != NULL){
            cout<<ptr->data<<" ";
            ptr = ptr -> next;
        }
    }
    cout<<endl;
}

int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}

