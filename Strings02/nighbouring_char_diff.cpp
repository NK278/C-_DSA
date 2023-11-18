#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cout<<"Enter s:";
    getline(cin,s);
    int cnt=0;
    for(int i=0;i<s.length();i++){
        if(s.length()==1){
            cnt=0;
            break;
        }
        if(s.length()==2 && s[0]!=s[1]){
            cnt=1;
            break;
        }
        if(i==0){
            if(s[i]!=s[i+1]) cnt++;
        }
        else if(i==s.length()-1){
            if(s[i]!=s[i-1]) cnt++;
        }
        else if(s[i]!=s[i+1] && s[i]!=s[i-1]) cnt++;
    }
    cout<<cnt;
    return 0;
}