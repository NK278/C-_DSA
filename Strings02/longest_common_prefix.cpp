#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs){
    if(strs.size()==1) return strs[0];
    sort(strs.begin(),strs.end());
    string f=strs[0];
    string l=strs[strs.size()-1];
    string s="";
    for(int i=0;i<min(f.length(),l.length());i++){
        if(f[i]==l[i]) s+=f[i];
        else return s; 
    }
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    string ans=longestCommonPrefix(v);
    cout<<ans<<endl;
    return 0;
}