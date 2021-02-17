 #include<iostream>
 using namespace std;

 int main(){
    int n, arr[10],counter=1;
    cout<<"enter the number of element"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    while(counter < n ){
        for(int i = 0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
 }