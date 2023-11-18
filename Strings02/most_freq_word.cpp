#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cout<<"Enter s:";
    getline(cin,s);
    stringstream x(s);
    string temp;
    vector<string> v;
    while(x>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int mx=1,cnt=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) cnt++;
        else cnt=1;
        mx=max(mx,cnt);
    }
     cnt=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) cnt++;
        else cnt=1;
        if(cnt==mx){
            cout<<v[i]<<" "<<mx<<endl;
        }
    }
    return 0;
}