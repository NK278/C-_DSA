#include<bits/stdc++.h>
using namespace std;
void vector_in(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
}
vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v(2);
        int n=nums.size();
        int lo=0,hi=n-1;
        v[0]=-1;
        v[1]=-1;
        while(lo<=hi){
            int mid=lo+((hi-lo)/2);
            if(nums[mid]==target){
                if(mid==0){
                    v[0]=mid;
                    break;
                }
                else if(nums[mid-1]!=target){
                    v[0]=mid;
                    break;
                }else{
                    hi=mid-1;
                }
            }
            else if(nums[mid]>target) hi=mid-1;
            else if(nums[mid]<target) lo=mid+1;
        }
        lo=0,hi=n-1;
        while(lo<=hi){
            int mid=lo+((hi-lo)/2);
            if(nums[mid]==target){
                if(mid==n-1){
                    v[1]=mid;
                    break;
                }
                else if(nums[mid+1]!=target){
                    v[1]=mid;
                    break;
                }else{
                    lo=mid+1;
                }
            }
            else if(nums[mid]<target) lo=mid+1;
            else if(nums[mid]>target) hi=mid-1;
        }
        return v;
        
    }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter x:";
    cin>>x;
    vector<int> v;
    vector_in(v,n);
    int lo=0,hi=n-1;
    bool f=false;
    while(lo<=hi){
        int mid=lo+((hi-lo)/2);
        if(v[mid]==x){
            if(v[mid+1]!=x){
                f=true;
                cout<<mid<<" ";
                break;
            }else{
                lo=mid+1;
            }
        }
        else if(v[mid]<x) lo=mid+1;
        else hi=mid-1;
    }
    if(!f) cout<<"-1";
    return 0;
}