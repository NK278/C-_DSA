#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target) {
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        int piv=-1;
        if(n==2){
            if(target==nums[0]) return 0;
            else if(target==nums[1]) return 1;
            else return -1;
        }
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(mid==0) lo=mid+1;
            else if(mid==n-1) hi=mid-1;
            else if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
                piv=mid;
                break;
            }
            else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                piv=mid+1;
                break;
            }
            else if(nums[mid]>nums[hi]) lo=mid+1;
            else hi=mid-1;
        }
        if(piv==-1){
            lo=0;
            hi=n-1;
            while(lo<=hi){
                int m=lo+(hi-lo)/2;
                if(nums[m]==target) return m;
                else if(nums[m]>target) hi=m-1;
                else lo=m+1;
            }
        }
        else if(target>=nums[0] && target<=nums[piv-1]){
            lo=0;
            hi=piv-1;
            while(lo<=hi){
                int m=lo+(hi-lo)/2;
                if(nums[m]==target) return m;
                else if(nums[m]>target) hi=m-1;
                else lo=m+1;
            }
        }else{
            lo=piv;
            hi=n-1;
            while(lo<=hi){
                int m=lo+(hi-lo)/2;
                if(nums[m]==target) return m;
                else if(nums[m]>target) hi=m-1;
                else lo=m+1;
            }
        }
        return -1;
    }
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
    cout<<"Enter n:"
    cin>>n;
    cout<<"Enter x:"
    cin>>x;
    vector<int> arr;
    vector_in(arr,n);
    cout<<search(arr,x)<<endl;
    return 0;
}