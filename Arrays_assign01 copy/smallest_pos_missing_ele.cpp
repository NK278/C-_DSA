#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        v.push_back(e);
    }
    int x=0;
    bool f=false;
    for(int i=0;i<n;i++){
        if(v[i]!=x){
            f=true;
            break;
        }
        else x++;
    }
    if(f==true) cout<<x<<endl;
    return 0;
}