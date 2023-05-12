#include<bits/stdc++.h>
using namespace std;
void vector_in(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
}
int findContentChildren(vector<int>& g, vector<int>& s){
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int cnt=0;
    int i=0,j=0;
    while(i<g.size() && j<s.size()){
        if(s[i]>=g[i]){
            cnt++;
            i++;
            j++;
        }else{
            j++;
        }
    }
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<int> v;
    vector_in(v,n);
    return 0;
}