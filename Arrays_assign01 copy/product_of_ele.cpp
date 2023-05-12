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
    int ans=1;
    for(int i=0;i<n;i++){
        ans*=v[i];
    }
    cout<<"product is:"<<ans;
    return 0;
}