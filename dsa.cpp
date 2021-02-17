#include<iostream>
#include<cmath>
#include <string>
#include <vector> 
using namespace std;



int main ()
{	
	int t;
	cin>>t;
	while(t--){
		int n,k,x,y;
		int position;
		cin>>n>>k>>x>>y;
		vector<pair<int, int> > V;
		if(x==y){
			cout<<n<<" "<<n<<endl;
		}else{
			if(x>y){
				V.push_back(make_pair(n,y+n-x));
				V.push_back(make_pair(y+n-x,n));
				V.push_back(make_pair(0,x-y));
				V.push_back(make_pair(x-y,0));
			}else{
				V.push_back(make_pair(x+n-y,n));
				V.push_back(make_pair(n,n-y+x));
				V.push_back(make_pair(y-x,0));
				V.push_back(make_pair(x-y,0));
			}
		}
		position = (k-1)%4;
		cout<<V[position].first<<" "<<V[position].second<<endl;
	}
	return 0;
}