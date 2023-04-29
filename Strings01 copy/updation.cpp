#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++){
        if(i%2==0) s[i]='a';
    }
    cout<<s<<endl;
    return 0;
}