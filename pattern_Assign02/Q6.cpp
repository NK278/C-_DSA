#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no  of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j ) cout<<"*";
            else cout<<" ";
        }
        for(int k=1;k<=n;k++){
            if((k+i==n+1 )&& (k!=1 && i!=n)) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}