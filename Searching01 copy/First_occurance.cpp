#include<bits/stdc++.h>
using namespace std;
void vector_in(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cout<<"Enter n:";
    cin>>n;
    vector<int> v;
    vector_in(v,n)=-
    cout<<"Enter x:";
    cin>>x;
    int lo=0,hi=n-1;
    bool f=false;
    while(lo<=hi){
        int mid=lo+((hi-lo)/2);
        if(v[mid]==x){
            if(v[mid-1]!=x){
                f=true;
                cout<<mid<<" ";
                break;
            }else{
                hi=mid-1;
            }
        }
        else if(v[mid]<x) lo=mid+1;
        else hi=mid-1;
    }
    if(!f) cout<<"Not Found";
    return 0;
}