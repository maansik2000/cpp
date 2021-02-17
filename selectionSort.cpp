#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	int arr[10];
	
	while(t--){
	    for(int i;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            if(arr[j]<arr[i]){
	                int temp = arr[j];
	                arr[j]= arr[i];
	                arr[i] = arr[j];
	            }
	            
	        }
	    }
	    for(int i = 0;i<n;i++){
	        cout<<arr[i]<<endl;
	    }
	}