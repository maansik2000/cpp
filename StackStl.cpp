#include <bits/stdc++.h> 
using namespace std;

void showstack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(54);
    s.push(454);
    s.push(88);
    s.push(30);
    cout<<s.size();
    cout<<"the stack is"<<endl;
    showstack(s);
    return 0;
}

