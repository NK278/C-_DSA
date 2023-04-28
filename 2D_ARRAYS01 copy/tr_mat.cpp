#include<bits/stdc++.h>
using namespace std;
void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
vector<vector<int> > transpose(vector<vector<int> >& matrix){
    int r=matrix.size();
    int c=matrix[0].size();
    vector<vector<int> > result(c,vector<int>(r));
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            result[i][j]=matrix[j][i];
        }
    }
    return result;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j) swap(&a[i][j],&a[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}