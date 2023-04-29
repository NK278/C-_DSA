#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cout<<"Enter s:";
    getline(cin,s);
    stringstream x(s);
    string temp;
    while(x>>temp){
        cout<<temp<<endl;
    }
    return 0;
}