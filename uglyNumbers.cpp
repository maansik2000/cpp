
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


//without using dp
ll maxDivide(ll a, ll b){
    while(a%b == 0){
        a = a/b;
    }
    return a;
}

ll isUgly(long long n){
    n = maxDivide(n,2);
    n = maxDivide(n,3);
    n = maxDivide(n,5);

    return (n == 1)? 1 : 0;
}

ll getUglyNo(ll n){
    int i = 1;

    int count = 1;

    while(n>count){
        i++;
        if(isUgly(i))
            count++;
    }

    return i;
}


//using dp
ll getUglyNo1(ll n){
    //to store ugly numbers
    ll ugly[n];
    ll i2 = 0, i3 = 0,i5 = 0;
    ll next_multiple_of_2 = 2;
    ll next_multiple_of_3 = 3;
    ll next_multiple_of_5 = 5;
    ll next_ugly_no = 1;

    ugly[0] = 1;

    for(int i = 1; i < n; i++){
        next_ugly_no = min(
            next_multiple_of_2,
            min(next_multiple_of_3, next_multiple_of_5));
        
        ugly[i] = next_ugly_no;

        if(next_ugly_no == next_multiple_of_2){
            i2 = i2 + 1;
            next_multiple_of_2 = ugly[i2] * 2;
        }

        if(next_ugly_no == next_multiple_of_3){
            i3 = i3 + 1;
            next_multiple_of_3 = ugly[i3] * 3;
        }

        if(next_ugly_no == next_multiple_of_5 ){
            i5 = i5 + 1;
            next_multiple_of_5 = ugly[i5] * 5;
        }
    }

    return next_ugly_no;

}

//using SET data structure
ll setUgly(ll n){
    if(n==1 || n==2 || n==3 || n==4 || n==5){
        return n;
    }

    set<ll> s;

    s.insert(1);
    n--;

    while(n){
        auto it = s.begin();

        ll x = *it;

        s.erase(it);


        s.insert(x*2);
        s.insert(x*3);
        s.insert(x*5);

        n--;
    }

    return *s.begin();
}

int main(){
    ll n;
    cin>>n;

    //without dp
    cout<<getUglyNo(n)<<endl;

    //using dp
    cout<<getUglyNo1(n)<<endl;
    return 0;
}