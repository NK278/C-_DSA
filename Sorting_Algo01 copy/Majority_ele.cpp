#include<bits/stdc++.h>
using namespace std;
void vector_in(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
}
int majorityElement(vector<int>& nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
     return nums[n/2];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<int> v;
    vector_in(v,n);
    cout<<majorityElement(v);
    return 0;
}