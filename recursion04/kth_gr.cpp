// https://leetcode.com/problems/k-th-symbol-in-grammar/submissions/985645423/ 
#include<bits:stdc++>
using namespace std;
class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1) return 0;
        if(k%2==0){
            int pans= kthGrammar(n-1,k/2);
            if(pans==0) return 1;
            else return 0;
        }
        else{
            return kthGrammar(n-1,k/2+1);
        }
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}