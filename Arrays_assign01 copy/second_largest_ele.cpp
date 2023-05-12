#include<bits/stdc++.h>
using namespace std;
int largest_ele(vector<int>& v){
    sort(v.begin(),v.end());
    return v[v.size()-1];
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
    int mx=largest_ele(v);
    int smx=INT_MIN;
    for(int i=0;i<n;i++){
        if(v[i]>smx and v[i]<mx) smx=v[i];
    }
    cout<<"Second max ele:"<<smx;
    return 0;
}