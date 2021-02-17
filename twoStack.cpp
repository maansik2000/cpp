#include <iostream> 
#include <stdlib.h> 

using namespace std;

class twoStack{
    int* arr;
    int size;
    int top1,top2;
    public:
        twoStack(int n){
            size = n;
            arr = new int[n];
            top1 = -1;
            top2 = size;
        }

        void push1(int x){
            if(top1 < top2-1){
                top1++;
                arr[top1] = x;
            }else{
                cout<<"stack overflow";
                abort();
            }
        }

        void push2(int x){
            if(top1< top2-1){
                top2++;
                arr[top2] = x;
            }else{
                cout<<"stack overflow";
                abort();
            }
        }

        int pop1(){
            if(top1>=0){
                int x = arr[top1];
                top1--;
                return x;
            }else{
                cout << "Stack UnderFlow"; 
                exit(1); 
            }
        }
        int pop2(){
            if(top2<size){
                int x = arr[top2];
                top2--;
                return x;
            }else{
                cout << "Stack UnderFlow"; 
            exit(1); 
            }
        }
        void display(){
            int i;
            for(int i=top1;i>=0;i--){
                cout<<arr[i];
            }
        }
};

int main(){
    twoStack ts(5);
    ts.push1(5);
    ts.push1(70);
    ts.push2(45);
    ts.push2(3);
    ts.display();
    return 0;
}