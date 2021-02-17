#include <bits/stdc++.h> 
using namespace std; 

class Stack{
    queue<int> q1,q2;
    int cur_size;
    public:
        Stack(){
            cur_size = 0;
        }
        void pop(){
            if (q1.empty()) 
            return;

            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
            }

            q1.pop();
            cur_size--;

            queue<int> q = q1;
            q1 = q2;
            q2 = q;
        }

        void push(int x){
            q1.push(x);
            cur_size++;
        }

        int top(){
            if(q1.empty()){
                return -1;
            }
            while(q1.size()!= 1){
                q2.push(q1.front());
                q1.pop();
            }

            int temp = q1.front();
            q1.pop();
            q2.push(temp);
            queue<int> q = q1; 
        q1 = q2; 
        q2 = q; 
        return temp;
        }

        int size(){
            return cur_size;
        }
};


int main() 
{ 
    Stack s; 
    s.push(1); 
    s.push(2); 
    s.push(3); 
    s.push(4); 
  
    cout << "current size: " << s.size() 
         << endl; 
    cout << s.top() << endl; 
    s.pop(); 
    cout << s.top() << endl; 
    s.pop(); 
    cout << s.top() << endl; 
    cout << "current size: " << s.size() 
         << endl; 
    return 0; 
} 