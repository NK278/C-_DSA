#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter m:";
    cin>>m;
    cout<<"Enter n :";
    cin>>n;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            if(i==0||j==0 || j==n-1||i==m-1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}