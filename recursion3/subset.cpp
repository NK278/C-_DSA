// https://leetcode.com/problems/subsets/description/
#include<bits:stdc++>
using namespace std;
void subset(string ans,string org){
    if(org==""){
        cout<<ans<<" ";
        return;
    }
    char ch=org[0];
    subset(ans+ch,org.substr(1));
    subset(ans,org.substr(1));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}