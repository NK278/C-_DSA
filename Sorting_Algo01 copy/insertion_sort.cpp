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
    // Insertion sort
    for(int i=0;i<n;i++){
        int j=i;
        while(j>=1){
            if(v[j]>=v[j-1]) break;
            else swap(v[j],v[j-1]);
            j--;
        }
    }
    // Printing
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}