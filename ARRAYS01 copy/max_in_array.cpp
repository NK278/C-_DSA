#include<bits/stdc++.h>
using namespace std;
void input_arr(int* a,int n){
    for(int i=0;i<n;i++) cin>>a[i];
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int a[n];
    input_arr(a,n);
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(mx<a[i]) mx=a[i];
    }
    cout<<"max ele.:"<<mx;
}