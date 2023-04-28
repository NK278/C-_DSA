#include<bits/stdc++.h>
using namespace std;
int matrixScore(vector<vector<int> >& grid){
    int r=grid.size();
    int c=grid[0].size();
    for(int i=0;i<r;i++){
        if(grid[i][0]==0){
            for(int j=0;j<c;j++){
                if(grid[i][j]==0) grid[i][j]=1;
                else grid[i][j]=0;
            }
        } 
    }
    for(int j=0;j<c;j++){
            int noo=0,noz=0;
            for(int i=0;i<r;i++){
                if(grid[i][j]==0) noz++;
                else noo++;
            }
            if(noz>noo){
                for(int i=0;i<r;i++){
                    if(grid[i][j]==0) grid[i][j]=1;
                    else grid[i][j]=0;
                }
            }
        }
    int sum=0;
    for(int i=0;i<r;i++){
        int x=1;
        for(int j=c-1;j>=0;j--){
            sum+=grid[i][j]*x;
            x*=2;
        }
    }
    return sum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter m:";
    cin>>m;
    vector<vector<int> > grid(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    cout<<matrixScore(grid);
    return 0;
}