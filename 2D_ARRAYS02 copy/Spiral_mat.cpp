#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n;
    cout<<"ENter m:";
    cin>>m;
    cout<<"Enter n:";
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int minr=0,minc=0;
    int maxr=m-1,maxc=n-1;
    int tne=n*m;
    int ct=0;
    while(minr<=maxr&& minc<=maxc){
        // right
        for(int j=minc;j<=maxc && ct<tne;j++){
            cout<<a[minr][j]<<" ";
            ct++;
        }
        minr++;
        if(minr>maxr|| minc>maxc) break;
        // down
        for(int i=minr;i<=maxr && ct<tne;i++){
            cout<<a[i][maxc]<<" ";
            ct++;
        }
        maxc--;
        // left
        for(int j=maxc;j>=minc && ct<tne;j--){
            cout<<a[maxr][j]<<" ";
            ct++;
        }
        maxr--;
        // up
        for(int i=maxr;i>=minr && ct<tne;i--){
            cout<<a[i][minc]<<" ";
            ct++;
        }
        minc++;
    }
    return 0;
}