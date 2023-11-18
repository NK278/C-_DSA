#include<bits:stdc++>
using namespace std;
void generate(string s,int n){
    if(n==0){
        cout<<s<<endl;
        return;
    }
    generate(s+'0',n-1);
    if(s=="" || s[s.length()-1]=='0') generate(s+'1',n-1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}