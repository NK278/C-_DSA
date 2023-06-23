// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
// #include<bits/stdc++.h>
#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
bool check(int mid,vector<int>& weights,int days){
    int n=weights.size();
    int m=mid;
    int count=1;
    for(int i=0;i<n;i++){
        if(m>=weights[i]) m-=weights[i];
        else{
            count++;
            m=mid;
            m-=weights[i];
        }
    }
    if(count>days) return false;
    return true;
}
int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int max=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            if(max<weights[i]) max=weights[i];
            sum+=weights[i];
        }
        int lo=max;
        int hi=sum;
        int mid=lo+(hi-lo)/2;
        int ans=0;
        while(lo<=hi){
            if(check(mid,weights,days)==true){
                ans=mid;
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        return ans;
    }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}