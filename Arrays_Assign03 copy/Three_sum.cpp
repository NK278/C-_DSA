#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,x;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter x:";
    cin>>x;
    vector<int> v;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        v.push_back(e);
    }
   int cnt=0;
   for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
        for(int k=i+2;k<n;k++){
            if(v[i]+v[j]+v[k]==x) cnt++;
        }
    }
   }
   cout<<cnt;
    return 0;
}