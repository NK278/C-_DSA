#include<bits/stdc++.h>
using namespace std;
void vector_in(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
}
bool is_sorted(vector<int>& v){
    bool f=true;
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]){
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
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<int> v;
    vector_in(v,n);
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    // optimized
    for(int i=0;i<n-1;i++){
         bool f=true;
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
                f=false;
            }
        }
        if(f==true) break;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}