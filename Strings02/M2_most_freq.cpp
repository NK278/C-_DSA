#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cout<<"Enter s:";
    getline(cin,s);
    vector<int> arr(26,0);
    for(int i=0;i<s.length();i++){
        arr[(int)s[i]-(int)'a']++;
    }
    int mx=0;
    for(int i=0;i<26;i++){
        if(arr[i]>mx) mx=arr[i];
    }
    for(int i=0;i<26;i++){
        if(arr[i]==mx){
            int ascii=i+97;
            char c=(char)ascii;
            cout<<c<<" "<<mx;
        }
    }
    return 0;
}