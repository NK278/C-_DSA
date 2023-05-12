#include<bits/stdc++.h>
using namespace std;
# define MAX 500
#define ull unsigned long long
int mul(int x,int v[],int n){
    int cry=0;
    for(int i=0;i<n;i++){
        int p=v[i]*x +cry;
        v[i]=p%10;
        cry=p/10;
    }
    while(cry){
        v[n]=cry%10;
        cry/=10;
        n++;
    }
    return n;
}
ull ftr(int n){
    ull f=1;
    for(int i=2;i<=n;i++){
        f*=i;
    }
    return f;
}
void fact(int n){
    int v[MAX];
    v[0]=1;
    int vs=1;
    for(int i=2;i<=n;i++){
        vs=mul(i,v,vs);
    }
    for(int i=vs-1;i>=0;i--){
        cout<<v[i];
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
    fact(n);
    ull f=ftr(n);
    // cout<<f;
    return 0;
}