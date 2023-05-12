#include<bits/stdc++.h>
using namespace std;
void vector_in(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<int> v;
    vector_in(v,n);
    vector<int> visted(n,0);
    int x=0;
    for(int i=0;i<n;i++){
        int min_e=INT_MAX;
        int min_idx=-1;
        for(int j=0;j<n;j++){
            if(visted[j]==1) continue;
            else{
                if(min_e>v[j]){
                    min_e=v[j];
                    min_idx=j;
                }
            }
        }
        v[min_idx]=x;
        visted[min_idx]=1;
        x++;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}