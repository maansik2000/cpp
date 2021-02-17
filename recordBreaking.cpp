 #include<iostream>
 #include <algorithm>
 using namespace std;

 int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<"1"<<endl;
    }
    int ans =0;
    int mx = -19999;

    for(int i=0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            ans++;
            mx = max(mx,arr[i]);
        }
    }
    cout<<ans<<endl;
    return 0;
 }