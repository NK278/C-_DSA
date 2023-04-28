#include<bits/stdc++.h>
using namespace std;
void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void neg_b_pos_e(vector<int>& v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]<0) i++;
        if(v[j]>=0) j--;
        if(i>j) break;
        if(v[i]>0 and v[j]<=0){
            swap(&v[i],&v[j]);
            i++;
            j--;
        }
    }
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int e;
        cout<<"Enter e:";
        cin>>e;
        v.push_back(e);
    }
    neg_b_pos_e(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}