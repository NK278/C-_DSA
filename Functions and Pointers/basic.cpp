#include<bits/stdc++.h>
using namespace std;
int sum(int x,int y){
    return x+y;
}
int mini(int x,int y){
    int a;
    if(x>y) a=x;
    else a=y;
    return a;
}
int factroial(int n){
    if(n==0 || n==1) return 1;
    return n*factroial(n-1);
}
int nCr(int n,int r){
    return factroial(n)/(factroial(n-r)*factroial(r));
}
int nPr(int n,int r){
    return nCr(n,r)*factroial(r);
}
int main(){
    // cout<<sum(2,3);
    
    return 0;
}