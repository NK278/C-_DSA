#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter x:";
    cin>>x;
    vector<int> v;
    for(int i=0;i<n;i++){
        int e;
        cout<<"Enter e:";
        cin>>e;
        v.push_back(e);
    }
    vector<int> v2(v.size());
    for(int i=0;i<v2.size();i++){
        int j=v.size()-1-i;
        v2[i]=v[j];
    }
    for(int i=0;i<v2.size();i++) cout<<v2[i]<<" ";
    return 0;
}