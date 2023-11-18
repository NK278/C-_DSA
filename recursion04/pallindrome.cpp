#include<bits:stdc++>
using namespace std;
bool ispal(string s){
    int i=0,j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
bool ispal2(string s,int i,int j){
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    else return ispal2(s,i+1,j-1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}