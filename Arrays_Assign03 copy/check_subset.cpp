#include<bits/stdc++.h>
using namespace std;
void vector_in(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
}
bool is_subset(vector<int>& v1,vector<int>& v2){
    int i,j;
    bool f=true;
    if(v1.size()<v2.size()) return false;
    while(i<v1.size() and j<v2.size()){
        if(v1[i]<v2[j]){
            i++;
        }
        else if(v1[i]==v2[j]){
            i++;
            j++;
        }else{
            f=false;
            break;
        }
    }
    return f;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter m:";
    cin>>m;
    vector<int> v1(n);
    vector_in(v1,n);
    vector<int> v2(m);
    vector_in(v2,m);
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    if(is_subset(v1,v2)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}