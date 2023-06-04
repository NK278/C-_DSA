#include<bits/stdc++.h>
using namespace std;
void vector_in(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
}
int search(vector<int>& nums, int target) { // TC=O(logn)
    int n = nums.size();
    int lo=0,hi=n-1;
    while(lo<=hi){
        int mid = lo+((hi-lo)/2);
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target) hi=mid-1;
        else lo=mid+1;
    }
    return -1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<int> v;
    vector_in(v,n);
    sort(v.begin(),v.end());
    
    return 0;
}