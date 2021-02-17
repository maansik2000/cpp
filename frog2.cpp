
#include "bits/stdc++.h"
typedef long long ll; 
using namespace std;

int main(){

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        ll w[n];
        ll len[n];
        

        for(ll i=0;i<n;i++){
            cin>>w[i];
        }
        for(ll i=0;i<n;i++){
            cin>>len[i];
        }

        if(n == 2){
            if(w[0] == 1  && w[1] == 2){

                cout<<"0"<<endl;

            }else{

                if(len[0] == 1){
                    cout<<"2"<<endl;
                }else{
                    cout<<"1"<<endl;
                }

            }
        }
        else if(n == 3){
            ll a,b,c,ap,bp,cp;
            ll ans = 0;

            for(ll i=0;i<n;i++){
                if(w[i] == 1){
                    a = i;
                    ap = i;
                }else if(w[i] == 2){
                    b = i;
                    bp = i;
                }else if( w[i] == 3){
                    c = i;
                    cp = i;
                }
            }

            while(c<=b || b<=a || c<=a){
                while(b<=a){
                    b+=len[bp];
                    ans++;
                }
                while(c<=b || c<=a){
                    c += len[cp];
                    ans++;
                }

            }

            cout<<ans<<endl;
        }
        else if(n == 4){
            ll a,b,c,d,ap,bp,cp,dp;
            ll ans = 0;

            for(ll i=0;i<n;i++){
                if(w[i] == 1){
                    a = i;
                    ap = i;
                }else if(w[i] == 2){
                    b = i;
                    bp = i;
                }else if( w[i] == 3){
                    c = i;
                    cp = i;
                }else if(w[i] == 4){
                    d = i;
                    dp = i;
                }
            }

            while(c<=b || b<=a || c<=a || d<=a || d<=b || d<=c){
                while(b<=a){
                    b+=len[bp];
                    ans++;
                }
                while(c<=b || c<=a){
                    c += len[cp];
                    ans++;
                }
                while(d<=a || d<=b || d<=c){
                    d += len[dp];
                    ans++;
                }

            }
            cout<<ans<<endl;
        }

    }
    return 0;
}