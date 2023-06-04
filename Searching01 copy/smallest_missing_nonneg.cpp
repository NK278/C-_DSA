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
    vector_in(v,n);
    // TC=O(n)
    // for(int i=0;i<n;i++){
    //     if(i!=v[i]){
    //         cout<<i;
    //         break;
    //     }
    // }
    // TC=O(logn)
    int lo=0,hi=n-1;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+((hi-lo)/2);
        if(v[mid]==mid) lo=mid+1;
        else{
            ans=mid;
            hi=mid-1;
        }
    }
    cout<<ans;
    return 0;
}