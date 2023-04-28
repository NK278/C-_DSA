#include<bits/stdc++.h>
using namespace std;
void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void rev_part(vector<int>& v,int st,int e){
    while(st<=e){
         swap(&v[st],&v[e]);
         st++;
         e--;
    }
}
void Rotate(vector<vector<int> >& matrix){
    int n=matrix.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(&matrix[i][j],&matrix[j][i]);
        }
    }
    for(int k=0;k<n;k++){
        int i=0,j=n-1;
        while(i<=j){
             swap(&matrix[k][i],&matrix[k][j]);
             i++;
             j--;
        }
    }
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
}