#include<bits/stdc++.h>
using namespace std;
void vector_in(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
}
 bool isPerfectSquare(int num){
    int lo = 0, hi = num;
    bool f=false;
    while(lo<=hi){
        int mid=lo+((hi-lo)/2);
        long long m=(long long)mid;
        long long y=(long long )num;
        if(m*m==y) return true;
        else if(m*m>y) hi=mid-1;
        else lo=mid+1;
    }
    return false;
    // O(1):
    // int root=sqrt(num);
    // if(root*root==num) return true;
    // return false;
 }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cout<<"Enter n:";
    cin>>n;
    vector<int> v;
    vector_in(v,n);
    return 0;
}