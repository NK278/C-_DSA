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
    
    // selection sort
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int min_idx=-1;
        for(int j=i;j<n;j++){
            if(v[j]<min){
                min=v[j];
                min_idx=j;
            }
        }
        swap(v[i],v[min_idx]);
    }
    for(int ele : v){
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}