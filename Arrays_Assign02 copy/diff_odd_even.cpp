#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
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
    int osm=0;
    int s=0;
    for(int i=0;i<n;i++){
        s=s+v[i];
    }
    for(int i=1;i<n;i+=2){
        osm+=v[i];
    }
    cout<<" diff. even sum and odd sum:"<<abs((2*osm)-s);
    return 0;
}