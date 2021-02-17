//queue using two stacks

#include <bits/stdc++.h> 
using namespace std; 

class queue{
    public:
        stack<int> s1,s2;
        void enqueue(int x);
        int dequeue();
}

void queue::enqueue(int x){
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(x);

    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
};

int queue::dequeue(){
    if (stack1.empty()) { 
			cout << "queue is Empty"; 
			exit(0); 
		}
    int x = stack1.top(); 
    stack1.pop(); 
    return x;
};

int main() 
{ 
	queue q; 
	q.enqueue(3); 
	q.enqueue(4); 
	q.enqueue(5); 

	cout << q.dequeue() << endl; 
	cout << q.dequeue() << endl; 
	cout << q.dequeue() << endl; 

	return 0; 
} 