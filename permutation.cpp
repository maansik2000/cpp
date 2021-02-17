#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> >ans;
#include<algorithm>

//permutation using distinct element

//using stl
void Usingstl(vector<int> &a){
    sort(a.begin(), a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(), a.end()));
}

//recursion
void permutation(vector<int> &a, int idx){
    if(idx == a.size()){
        ans.push_back(a);
        return;
    }

    for(int i=idx;i<a.size();i++){
       
        swap(a[i],a[idx]);
        permutation(a,idx+1);
        swap(a[i],a[idx]);
    }
    return;
}

//permutation using duplicate number
void helper(vector<int> a,vector<vector<int>> &ans,int idx ){
    if(idx== a.size()){
        ans.push_back(a);
        return;
    }

    for(int i = idx;i<a.size();i++){
        if(i != idx && a[i]==a[idx]){
            continue;
        }
        swap(a[i],a[idx]);
        helper(a,ans,idx+1);
    }
}


vector<vector<int>> permute(vector<int> nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    helper(nums,ans,0);
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a){
        cin>>i;
    }
    vector<vector<int> > res = permute(a);
    for(auto i : ans){
        for(auto v : i){
            cout<<v<<" ";
        }
        cout<<endl;
    }
    return 0;
}