#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s="AZYZXBDJK";
    string str;
    for(int i=0;i<s.length();i++){
        if(s[i]>='X') str.push_back(s[i]);
    }
    int n=str.length();
    for(int i=0;i<n-1;i++){
        bool f=true;
        for(int j=0;j<n-i-1;j++){
            if(str[j]>str[j+1]) {
                swap(str[j],str[j+1]);
                f=false;
            }
        }
        if(f==true) break;
    }
    reverse(str.begin(),str.end());
    cout<<str;
    return 0;
}