#include<iostream>
using namespace std;

class Node{
    private:
        static const int max = 100;
        int arr[max];
        int top;
    public:
        Node(){
            top = -1;
        }
        bool isEmpty();
        int pop();
        void push(int x);
        bool isFull();
};

bool Node::isEmpty(){
    if(top == -1){
        return true;
    }
    return false;
}

bool Node::isFull(){
    if(top == max-1){
        return true;
    }
    return false;
}

int Node::pop(){
    if(isEmpty()){
        cout<<"stack underflow"<<endl;
        abort();
    }
    int x = arr[top];
    top--;
    return x;
}

void Node::push(int x){
    if(isFull()){
        cout<<"stack overflow"<<endl;
        abort();
    }
    top++;
    arr[top] = x;
}

class SpecialStack : public Node{
    Node min;
    public:
        int pop();
        void push(int x);
        int getMin();
};

void SpecialStack::push(int x)
{
    if (isEmpty() == true) {
        Node::push(x);
        min.push(x);
    }
    else {
        Node::push(x);
        int y = min.pop();
        min.push(y);
 
        if (x <= y)
            min.push(x);
    }
}
 

int SpecialStack::pop()
{
    int x = Node::pop();
    int y = min.pop();
 
    if (y != x)
        min.push(y);
 
    return x;
}

int main()
{
    SpecialStack s;
    s.push(10);
    s.push(20); 
    s.push(30);
    cout << s.getMin() << endl;
    s.push(5);
    cout << s.getMin();
    return 0;
}