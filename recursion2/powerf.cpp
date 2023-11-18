#include<bits:stdc++>
using namespace std;
int power(int x,int n){
    if(n==1) return x;
    if(n==0) return 1;
    int ans=power(x,n/2);
    if(n%2==0) return ans*ans;
    return ans*ans*x;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter x:";
    cin>>x;
    cout<<power(n,x);
    return 0;
}