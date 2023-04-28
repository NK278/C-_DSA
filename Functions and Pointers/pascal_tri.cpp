#include<bits/stdc++.h>
using namespace std;
int factroial(int n){
    if(n==0 || n==1) return 1;
    return n*factroial(n-1);
}
int nCr(int n,int r){
    return factroial(n)/(factroial(n-r)*factroial(r));
}
int main(){
     int n;
    cout<<" No of lines:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<" ";
        }
        for(int k=0;k<i+1;k++){
            cout<<nCr(i,k);
        }
        cout<<endl;
    }
    return 0;
}