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
    vector<int> ans;
    for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
                //  cout<<"("<<i<<","<<j<<")"<<endl;
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    return 0;
}