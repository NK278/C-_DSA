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
        int e;
        cin>>e;
        v.push_back(e);
    }
    vector<int> sv;
    for(int i=0;i<n;i++){
        sv.push_back(v[i]);
    }
    sort(v.begin(),v.end());
    bool f=false;
    for(int i=0;i<n;i++){
        if(v[i]!=sv[i]){
            f=true;
            break;
        }
    }
    if(!f) cout<<"Not sorted";
    else cout<<"Sorted";
    return 0;
}