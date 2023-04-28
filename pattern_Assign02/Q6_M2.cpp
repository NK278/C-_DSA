#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int m=n-1;
    int nsp=2*m-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int k=1;k<=nsp;k++) cout<<" ";
        nsp-=2;
        if(i!=n) cout<<"*";
        cout<<endl;
    }
    return 0;
}