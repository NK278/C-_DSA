#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    int n,m;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter m:";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]>mx) mx=arr[i][j];
        }
    }
    cout<<mx;
    return 0;
}