#include<bits/stdc++.h>
using namespace std;
void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void sort_012(vector<int>& v){
    int n=v.size();
    int no0=0;
    int no1=0;
    int no2=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) no0++;
        else if(v[i]==1) no1++;
        else no2++;
    }
    for(int i=0;i<n;i++){
        if(i<no0) v[i]=0;
        else if(i<(no1+no0)) v[i]=1;
        else v[i]=2;
    }
    return;
}
// dutch flag algo
void sort_012_dfg(vector<int>& v){
    int n=v.size();
    int lo=0;
    int mid=0;
    int hi=n-1;
    while(mid<=hi){
        if(v[mid]==2){
            swap(&v[mid],&v[hi]);
            hi--;
        }
        else if(v[mid]==0){
            swap(&v[mid],&v[lo]);
            lo++;
            mid++;
        }
        else{
            mid++;
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
    // sort_012(v);
    sort_012_dfg(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}