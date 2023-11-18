#include<bits:stdc++>
using namespace std;
void permutation(string ans,string org){
    if(org==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<org.length();i++){
        char ch=org[i];
        string l=org.substr(0,i);
        string r=org.substr(i+1);
        permutation(ans+ch,l+r);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str="abcde";
    permutation("",str);
    // string left=str.substr(0,2);
    // cout<<left<<endl;
    // string right=str.substr(2+1);
    // cout<<right<<endl;
    return 0;
}