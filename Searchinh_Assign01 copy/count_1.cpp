#include<bits/stdc++.h>
using namespace std;
void vector_in(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
}
int cnt_1(vector<int>& v){
    int n=v.size();
    int lo=0,hi=n-1;
    bool f=false;
    int fidx=-1
     while(lo<=hi){
            int mid=lo+((hi-lo)/2);
            if(v[mid]==1){
                if(mid==0){
                    fidx=mid
                    break;
                }
                else if(v[mid-1]!=1){
                    fidx=mid;
                    break;
                }else{
                    hi=mid-1;
                }
            }
            else if(v[mid]>1) hi=mid-1;
            else if(v[mid]<1) lo=mid+1;
        }
        if(fidx==-1) return 0;
        else return n-fidx;
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<int> v;
    vector_in(v,n);
    ios_base::sync_with_stdio(false);
    return 0;
}