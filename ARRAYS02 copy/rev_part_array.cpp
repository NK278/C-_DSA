#include<bits/stdc++.h>
using namespace std;
void swap(int* x,int*y){
    int t=*x;
    *x=*y;
    *y=t;
}
void rev_part(vector<int>& v,int st,int e){
    while(st<=e){
         swap(&v[st],&v[e]);
         st++;
         e--;
    }
}
int main(){
    int n,x;
    cout<<"Enter n:";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int e;
        cout<<"Enter e:";
        cin>>e;
        v.push_back(e);
    }
    for(int i=0,j=v.size()-1;i<=j;i++,j--){
          swap(&v[i],&v[j]);  
    }
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    return 0;
}