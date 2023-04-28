#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int x;
    cout<<"Enter ele x:";
    cin>>x;
    vector<int> v;
    for(int i=0;i<n;i++){
        int e;
        cout<<"Enter e:";
        cin>>e;
        v.push_back(e);
    }
    int idx=-1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx=i;
            break;
        }
    }
    cout<<idx;
    return 0;
}