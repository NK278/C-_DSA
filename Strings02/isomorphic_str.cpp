#include<bits/stdc++.h>
using namespace std;
 bool isIsomorphic(string s, string t){
    vector<int> v(150,1000);
    if(s.length()!=t.length()) return false;
    for(int i=0;i<s.length();i++){
        int idx=(int)s[i];
        if(v[idx]==1000) v[idx]=s[i]-t[i];
        else if(v[idx]!=(s[i]-t[i])) return false;
    }
    for(int i=0;i<150;i++) v[i]=1000;
    for(int i=0;i<s.length();i++){
        int idx=(int)t[i];
        if(v[idx]==1000) v[idx]=t[i]-s[i];
        else if(v[idx]!=(t[i]-s[i])) return false;
    }
    return true;
 }
int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cout<<"Enter s:";
    getline(cin,s);
    string t;
    cout<<"Enter t:";
    getline(cin,t);
    cout<<isIsomorphic(s,t)<<endl;
    return 0;
}