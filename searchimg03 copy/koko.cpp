// https://leetcode.com/problems/koko-eating-bananas/
#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
#include<stdbool.h>
using namespace std;
class Solution {
public:
    bool check(int speed,vector<int>& piles, int h){
        int cnt=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            if(cnt>h) return false;
            if(speed>=piles[i]) cnt++;
            else if(piles[i]%speed==0) cnt+=piles[i]/speed;
            else cnt+=(piles[i]/speed) +1;
        }
        if(cnt>h) return false;
        else return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int mx=-1;
        for(int i=0;i<n;i++){
            mx=max(mx,piles[i]);
        }
        int lo=1;
        int hi=mx;
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(check(mid,piles,h)){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
};
int main(){
    return 0;
}