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
void vect_in(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        int e;
        cout<<"Enter e:";
        cin>>e;
        v.push_back(e);
    }
}
void nextPaermutation(vector<int>& v){
    int n=v.size();
    int idx=-1;
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reverse(v.begin(),v.end());
        return;
    }
    reverse(v.begin() + idx+1,v.end());
    int j=-1;
    for(int i=idx+1;i<n;i++){
        if(v[i]>v[idx]){
            j=i;
            break;
        }
    }
    swap(&v[idx],&v[j]);
    return;
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<int> v;
    vect_in(v,n);
    nextPaermutation(v);
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}