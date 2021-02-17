#include<iostream>
#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int current_len = 0,maxLen = 0;
    int st=0, maxst=0;

    while(1){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(current_len > maxLen){
                maxLen = current_len;
                maxst = st;
            }

            current_len = 0;
            st = i+1;
        }else{
        current_len++;
        }
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }
    cout<<maxLen<<endl;
    for(int i =0;i<maxLen;i++){
        cout<<arr[i+maxst];
    }
    return 0;
}