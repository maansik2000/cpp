#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        string s;
        cin>>s;
        long long int count=0,ans=0;
        for(int i=0;i<n;i++)
        {
          if(s[i]=='1')
            {
               count++;
            }
        }
        ans=count+((count*(count-1))/2);
        cout<<ans<<endl;
    }
    return 0;
}