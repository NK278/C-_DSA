#include<bits/stdc++.h>
using namespace std;
int f_nrp(vector<int>& v){
    int n = v.size();
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<n;j++){
            if(j!=i and v[i]==v[j]) break;
        }
        if(j==n) return v[i];
    }
    return -1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        v.push_back(e);
    }
    int ans = f_nrp(v);
    if(ans==-1) cout<<"No repeating element";
    else cout<<ans;
    return 0;
}