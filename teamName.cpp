#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;

int main(){
    //your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<string> v;
        ll n, count=0; cin>>n;
        vector<int> a; input(a,n);
        vector<int> pos(n); loop(i,0,n-1) pos[i] = i;
        vector<int> l; input(l,n);
        vector<int> b(n); loop(i,0,n-1) b[i] = a[i];
        sort(b.begin(),b.end());

        for(int i=0;i<n;i++){
            string ele;
            cin>>ele;
            v.push_back(ele);
        }

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){

                auto it = find(v.begin(), v.end(),K);
                if(it != v.end()){

                    int index = it - v.begin();
                    return index;

                }else{

                    return -1;

                }
            }
        }

        for(int p=2;p*p<=1000000;p++){

            if(prime[p] == false){

                for(int i=p*p;i<=1000000;i+=p){
                    prime[i] = true;
                }

            }

        }

        loop(j,1,n-1){
            int index = getIndex(a,b[j]);
            int p = pos[getIndex(a,b[j-1])];
            int c = index;

            while(c<=p){
                c+=l[index];
                pos[index] = c;
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}