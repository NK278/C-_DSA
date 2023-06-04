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
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<int> v;
    vector_in(v,n);
    int lo=0,hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]==mid+1) lo=mid+1;
        if(v[mid]==mid){
            if(v[mid]==v[mid-1]){
                cout<<v[mid]<<" ";
                break;
            }else{
                hi=mid-1;
            }
        }
    }
    return 0;
}