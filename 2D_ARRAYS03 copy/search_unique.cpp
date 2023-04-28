#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int> >& matrix, int target){
    int row = matrix.size();
    int col = matrix[0].size();
    int i=0,j=col-1;
    while(i<=row-1 && j>=0){
        if(matrix[i][j]==target) return true;
        else if(matrix[i][j]>target) j--;
        else i++;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter m:";
    cin>>m;
    vector<vector<int> > matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    int target;
    cout<<"Enter target:";
    cin>>target;
    if(searchMatrix(matrix,target)){
        cout<<"Target found in matrix";
    }
    else{
        cout<<"Target not found in matrix";
    }
    return 0;
}