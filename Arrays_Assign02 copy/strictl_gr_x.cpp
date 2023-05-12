#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
    int x;
    cout<<"Enter x:";
    cin>>x;
    vector<int> v;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        v.push_back(e);
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(v[i]>x) ans++;
    }
    cout<<ans;
    return 0;
}