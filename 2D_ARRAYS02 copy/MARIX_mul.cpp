#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n,p,q;
    cout<<"Enter m:";
    cin>>m;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter p:";
    cin>>p;
    cout<<"Enter q:";
    cin>>q;
    if(n==p){
        int a[m][n];
        int b[p][q];
        cout<<"Enter ele of a";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        cout<<"Enter ele of b";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
                }
            }
            int res[m][q];
            for(int i=0;i<m;i++){
                for(int j=0;j<q;j++){
                    res[i][j]=0;
                    for(int k=0;k<p;k++){
                        res[i][j]+=a[i][k]*b[k][j];
                    }
                }
            }
            for(int i=0;i<m;i++){
                for(int j=0;j<q;j++){
                    cout<<res[i][j]<<" ";
                }
                cout<<endl;
            }
            
    }else{
        cout<<"MARRIX Mul DNE";
    }
    return 0;
}