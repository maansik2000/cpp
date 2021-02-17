#include<iostream>
#include "bits/stdc++.h"
using namespace std;
int main(){

    int arr[][]={{1,2,3},{4,5,6},{7,8,9}},transpose[][];

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            transpose[i][j] = arr[j][i];
        }
    }
    cout<<"entered matrix"<<endl;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"new matrix"<<endl;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;    
}