#include<iostream>
using namespace std;
 
long long fibonacci(int n)
{
    long long F[n+1];
 
    F[0]=0;
    F[1]=1;
 
    for(long long i=2;i<=n;i++)
        F[i]=F[i-1]+F[i-2];
 
    return F[n];
}

long long fibonacci2(long long n){

    long long a = 0 , b = 1, c ,i;
    if(n == 0)
        return a;

    for(long long i = 2; i<=n;i++){
        c = a + b;
        a = b;
        c = b;
    }

    return b;

}

 
int main()
{
    long long n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
 
    cout<<"Required fibonacci number is ";
    cout<<fibonacci(n)<<endl;
    cout<<fibonacci2(n)<<endl;
    cout<<endl;
    return 0;
}