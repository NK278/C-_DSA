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
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int b[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            b[i][j]=a[j][i];
        }
    }
    for(int i=0;i<m;i++){
        cout<<"[";
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"]"<<endl;
        // cout<<endl;
    }
    return 0;
}