#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cout<<"Enter s:";
    getline(cin,s);
    int mx=0;
    for(int i=0;i<s.length();i++){
        char c=s[i];
        int cnt=1;
        for(int j=i+1;j<s.length();j++){
            if(s[j]==s[i]) cnt++;
        }
        if(mx<cnt) mx=cnt;
    }
    for(int i=0;i<s.length();i++){
        char c=s[i];
        int cnt=1;
        for(int j=i+1;j<s.length();j++){
            if(s[j]==s[i]) cnt++;
        }
        if(mx==cnt){
            cout<<c<<endl;
        }
    }
    cout<<mx;
    return 0;
}