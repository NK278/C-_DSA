// https://leetcode.com/problems/subsets-ii/
#include<bits:stdc++>
using namespace std;
void subset(string ans,string org,vector<string>& v,bool f){
    if(org==""){
        v.push_back(ans);
        return;
    }
    char ch=org[0];
    if(org.length()==1){
        if(f==true) subset(ans+ch,org.substr(1),v,true);
        subset(ans,org.substr(1),v,true);
        return; // neeche ki codn na chale
    }
    char dh=org[1];
    if(ch==dh){ // dublicate
        if(f==true) subset(ans+ch,org.substr(1),v,true);
        subset(ans,org.substr(1),v,false);
    }else{ // no dublicate
        if(f==true) subset(ans+ch,org.substr(1),v,true);
        subset(ans,org.substr(1),v,true);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}