#include<bits/stdc++.h>
using namespace std;
void input_arr(int* a,int n){
    for(int i=0;i<n;i++) cin>>a[i];
}
int max_ele(int* a,int n){
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(mx<a[i]) mx=a[i];
    }
    return mx;
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int a[n];
    input_arr(a,n);
    int smx=INT_MIN;
    int mx=max_ele(a,n);
    for(int i=0;i<n;i++){
        if(a[i]!=mx && smx<a[i]) smx=a[i];
    }
    cout<<"max ele:"<<mx<<endl;
    cout<<"second max ele:"<<smx;
    return 0;
}