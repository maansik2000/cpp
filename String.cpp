#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str = "mansisarkar";

    for(int i=0;i<str.size();i++){
        if(str[i] >= 'a' && str[i] <='z'){
        str[i] = str[i] - 32;
        }
    }

    // make the string to upper case
    transform(str.begin(), str.end(), str.begin(), ::toupper);

    // to form a largest number from a numeric string
    sort(str.begin(),str.end(),greater<int>());

    //maximum number of times a chara is occuring
    int fre[26];
    for(int i=0;i<26;i++){
        fre[i] = 0;
    }
    for(int i=0;i<str.size();i++){
        fre[str[i] - 'a']++;
    }

    char ans = 'a';
    int maxF = 0;

    for(int i=0;i<26;i++){
        if(fre[i] > maxF){
            maxF = fre[i];
            ans = i + 'a';
        }
    }

    cout<<maxF<<" "<<ans<<endl;
    cout<<str;
    return 0;
}