#include<bits/stdc++.h>
using namespace std;
void vector_in(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
}
float max(float a,float b){
    if(a>=b) return a;
    else return b;
}
float min(float a,float b){
    if(a<b) return a;
    else return b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<int> v;
    vector_in(v,n);
    float kmin= (float)INT_MIN;
    float kmax= (float)INT_MAX;
    bool f=true;
    for(int i=0;i<n-1;i++){
        if(v[i]>=v[i+1]){
            kmin=max(kmin,(v[i]+v[i+1])/2.0);
        }
        else{
            kmax=min(kmax,(v[i]+v[i+1])/2.0);
        }
        if(kmin>kmax){
            f=false;
            break;
        }
    }
    if(f==false) cout<<-1;
    else cout<<"Range of k is : ["<<kmin<<" ,"<<kmax<< "]";
    return 0;
}