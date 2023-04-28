#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<vector<int> > v;
    vector<int> v1;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        v1.push_back(e);
    }
    vector<int> v2;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        v2.push_back(e);
    }
    v.push_back(v1);
    v.push_back(v2);
    return 0;
}