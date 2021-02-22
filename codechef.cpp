#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,num1,num2,count1=0, count2 = 0;
    int arr1[10];
    int arr2[10];
    for(int i=0;i<3;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<3;i++){
        cin>>arr2[i];
    }
    
    for(int i=0;i<3;i++){
        if(arr1[i]>arr1[i]){
            count1++;
        }else if(arr1[i]<arr2[i]){
            count2++;
        }
    }
    cout<<count1<<" "<<count2<<endl;
    return 0;
}