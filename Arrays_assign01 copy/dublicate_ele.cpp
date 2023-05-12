#include<bits/stdc++.h>
using namespace std;
bool dublicates(vector<int>& v){
    int f=false;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j]){
                 f=true;
                 break;
            }
        }
    }
    return f;
}
int main(){
    ios_base:: sync_with_stdio(false);
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
    sort(v.begin(),v.end());
    bool ans=dublicates(v);
    if(ans==true) cout<<"Dublicates ele present";
    else cout<<"dublicates not present";
    return 0;
}