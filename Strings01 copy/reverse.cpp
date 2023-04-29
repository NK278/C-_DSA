#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cout<<"Enter s:";
    getline(cin,s);
    int len=s.length();
    reverse(s.begin(),s.end()+ len/2);
    cout<<s;
    return 0;
}