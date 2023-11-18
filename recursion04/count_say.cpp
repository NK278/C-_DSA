// https://leetcode.com/problems/count-and-say/submissions/985654814/ 
#include<bits:stdc++>
using namespace std;
class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string str=countAndSay(n-1);
        string zr="";
        int fq=1;
        char ch=str[0];
        for(int i=1;i<str.length();i++){
            char d=str[i];
            if(ch==d){
                fq++;
            }
            else{
                zr+=(to_string(fq)+ch);
                fq=1;
                ch=d;
            }
        }
        zr+=(to_string(fq)+ch);
        return zr;
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    return 0;
}