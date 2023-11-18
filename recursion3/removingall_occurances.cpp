#include<bits:stdc++>
using namespace std;
void removechar(string ans,string org ){
    if(org.length()==0){
        cout<<ans;
        return;
    }
    char ch=org[0];
    if(ch=='a') removechar(ans,org.substr(1));
    else removechar(ans+ch,org.substr(1));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}