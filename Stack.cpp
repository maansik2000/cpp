#include<iostream>
#define MAX 1000
using namespace std;

//stack using array

class Stack{
    int top;

    public:
        int a[MAX];
        Stack(){
            top = -1;
        }
        bool push(int x);
        int pop();
        int peek();
        bool isEmpty();
        void display();
};

bool Stack::push(int x){
    if(top>=(MAX-1)){
        cout<<"stack overflow"<<endl;
        return false;
    }
    else{
        a[++top] = x;
        cout<<x<<" "<<"pushed into stack"<<endl;
    }
}

int Stack::pop(){
    if(top<0){
        cout<<"stack underflow"<<endl;
        return 0;
    }else{
        int x = a[top--];
        return x;
    }
}

int Stack::peek(){
    if(top<0){
        cout<<"stack underflow"<<endl;
        return 0;
    }else{
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty(){
    return (top<0);
}

void Stack::display(){
    int i;
    for(int i=top;i>=0;i--){
        cout<<a[i]<<" ";
    }
}

int main(){
    class Stack s;
    s.push(5);
    s.push(20);
    s.push(30);
    s.display();
    return 0;
}