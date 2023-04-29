#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        long long x=stoi(s);
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout<<v[n-1]<<" "<<"idx:"<<n-1;
    return 0;
}