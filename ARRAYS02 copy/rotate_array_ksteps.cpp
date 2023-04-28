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
    int n,k;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter k";
    cin>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int e;
        cout<<"Enter e:";
        cin>>e;
        v.push_back(e);
    }
    if(k>n) k=k%n; 
    rev_part(v,0,v.size()-k-1);
    rev_part(v,v.size()-k,v.size()-1);
    rev_part(v,0,v.size()-1);
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    return 0;
}