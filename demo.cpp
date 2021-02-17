#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>


using namespace std;

    bool f(int x, int y){
        return x > y;
    }

    //vector demo

    void vectordemo(){

        vector<int> A = {11,2,3,14};

        cout<<A[2]<<endl;

        sort(A.begin(), A.end());
        bool present = binary_search(A.begin(), A.end(), 3);
        present = binary_search(A.begin(), A.end(), 4);

        A.push_back(100);
        A.push_back(100);
        A.push_back(100);
        A.push_back(100);
        A.push_back(100);
        A.push_back(123);

        //first occurance of 263
        auto it = lower_bound(A.begin(), A.end(),100); //>=
        auto it2 = upper_bound(A.begin(), A.end(),100); // >

        cout<< *it << endl;
        cout<< *it2 << endl;
        cout<<it2 - it << endl;

        sort(A.begin(), A.end(),f);

        for(int &x : A){
        x++;
        cout<< x << " ";
        }
    }

    //setdemo

    void setdemo(){

        set<int> s;

        s.insert(5);
        s.insert(7);
        s.insert(9);
        s.insert(58);
        s.insert(-7);
        s.insert(-890);

        for(int x : s){
            cout<<x;
            cout<<endl;
        }
        auto it = s.find(9);
        if(it == s.end()){
            cout<<"not presesnt"<<endl;
        }else{
            cout<<"it's present"<<endl;
            cout<<*it<<endl;
        }
        
        auto it2 = s.lower_bound(50);
        cout<<*it2<<endl;

        auto it3 = s.upper_bound(7);
        cout<<*it3<<endl;

        auto it4 = s.upper_bound(58);
        if(it4 == s.end()){
            cout<<"cant find it"<<endl;
        }

    } 

    //mapDemo

    void mapDemo(){

        map<int, int> m;
        m[1] = 45;
        m[2] = 7;
        m[3] = -4;
        m[4] = 10;
        m[5] = 78;
        
        map<char, int> m2;
        string str = "mansi sarkar";

        for(char c : str){
            m2[c]++;
        }
        cout<<m2['a']<<" "<<m2['s']<<endl;
    }


    void stl(){
        set<pair<int, int>> s;

        s.insert({2,8});
        s.insert({10,20});
        s.insert({300,350});
        s.insert({45,59});
        s.insert({400,450});
        s.insert({70,390});

        /*
            {a,b} and {c,d}
            if a < c {a,b} is smaller than {c,d}
            if a == c, b < d then {a,b} is smaller than {c,d}
        */

        int point = 50;
        auto it = s.upper_bound({point, INT_MAX});
        if(it == s.begin()){
            cout<<"it is not present in the given interval"<<endl;
            return;
        }
        it--; 
          
        pair<int, int> current = *it;

        if(current.first <= point && point <= current.second){
            cout<<"yes it's present"<<current.first<<" "<<current.second<<endl;
        }else{
            cout<<"it is not present in the given interval"<<endl;
        }

    }


    //unordered map

    void unorderedMap(){
        int n;
        cin >> n;
        vector<int> A(n,0);
        for(int i; i < n ;i++){
            cin>>A[i];
        }
        map<int, int > first, second;

    }

int main()
{
    unorderedMap();
    return 0;
}