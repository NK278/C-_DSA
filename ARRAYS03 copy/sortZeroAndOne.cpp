#include<bits/stdc++.h>
using namespace std;
void sort01(vector<int>& v){
    int n=v.size();
    int no0=0;
    int no1=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) no0++;
        else no1++;
    }
    for(int i=0;i<n;i++){
        if(i<no0) v[i]=0;
        else v[i]=1;
    }
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int e;
        cout<<"Enter e:";
        cin>>e;
        v.push_back(e);
    }
    sort01(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}