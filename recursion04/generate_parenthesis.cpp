// https://leetcode.com/problems/generate-parentheses/ 
#include<bits:stdc++>
using namespace std;
class Solution {
public:
    void gen(vector<string>& ans,string s,int op,int cl,int n){
        if(cl==n) {
            ans.push_back(s);
            return;
        }
        if(op<n) gen(ans,s+'(',op+1,cl,n);
        if(cl<op) gen(ans,s+')',op,cl+1,n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        gen(ans,"",0,0,n);
        return ans;
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}