#include<iostream>
#include<vector>
#include<algorithm>
#include"bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,count=0,sum=0,a=0,b=0,total=0;
        cin>>n>>k;
        vector<int> box(n);
        
        for(int i=0;i<n;i++){
            cin>>box[i];
        }
        sort(box.begin(), box.end(), greater<int>());
        for(int i=0;i<n;i++){
            sum = sum + box[i];            
        }
        if(sum == (k*2)){
            cout<<n<<endl;
        }else if(sum<(k*2)){
            cout<<"-1"<<endl;;
        }
        else if(box[0]>= k && box[1] >=k){
            cout<<"2"<<endl;
        }else{
            for(int i=0;i<n;i++){
                while(total<=k){
                    total = total + box[i];
                    a++;
                    box.erase(box.begin());
                    // cout<<"a"<<a<<endl;
                }   
            }
            
            total = 0;
            for(int i=0;i<box.size();i++){
                while(total<=k){
                    total = total + box[i];
                    
                    box.erase(box.begin());
                    b++;
                    // cout<<"B"<<b<<endl;
                }   
                
            }
            count=a+b;
            cout<<count<<endl;
        }
    } 
    return 0;
}