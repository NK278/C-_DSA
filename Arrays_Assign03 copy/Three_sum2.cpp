#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums){
    vector<vector<int> > ans;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for(int i = 0; i < n-2; i++){
        int j=i+1,k=n-1;
        while(j<k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum==0){
                ans.push_back({nums[i],nums[j],nums[k]});
                while(j<k and nums[j]==nums[j+1]) j++;
                while(j<k and nums[k]==nums[k-1]) k--;
            }
            else if(sum < 0) j++;
            else k--;
        }
        while(i+1<n and nums[i]==nums[i+1]) i++;
    }

    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,x;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter x:";
    cin>>x;
    vector<int> v;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        v.push_back(e);
    }
  sort(v.begin(),v.end());
  int cnt=0;
  for(int i=0;i<n-2;i++){
    int j=i+1,k=n-1;
    while(j<k){
        if(v[i]+v[j]+v[k]==x) cnt++;
        else if(v[i]+v[j]+v[k]<x) j++;
        else k--;
  }
  }
  cout<<cnt;
    return 0;
}