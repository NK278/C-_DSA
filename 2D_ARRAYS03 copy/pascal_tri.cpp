#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > pascal_tri(int numRows){
    vector<vector<int> > v;
    for(int i=0;i<numRows;i++){
        vector<int> a(i+1);
        v.push_back(a);
        for(int j=0;j<=i;j++){
            if(j==i || j==0) v[i][j]=1;
            else v[i][j]=v[i-1][j]+v[i-1][j-1];
        }
    }
    return v;
}
vector<int> rt_pascal(int rowIndex){
    vector<vector<int> > v;
    v=pascal_tri(rowIndex+1);
    vector<int> a;
    for(int i=0;i<=rowIndex;i++){
        a.push_back(v[rowIndex][i]);
    }
    return a;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,idx;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter idx:";
    cin>>idx;
    vector<vector<int> > v=pascal_tri(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    vector<int> a=rt_pascal(idx);
    for(int i=0;i<=idx;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}