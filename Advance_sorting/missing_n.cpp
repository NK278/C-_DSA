// https://leetcode.com/problems/missing-number/ 
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            int cidx=nums[i];
            if(cidx==i or nums[i]==n) i++;
            else swap(nums[i],nums[cidx]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i) return i;
        }
        return n;
    }
};