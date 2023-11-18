#include<bits/bits:stdc++ .h>
using namespace std;
int power(int a,int b){
    if(b==1) return a;
    if(b==0) return 1;
    return a*power(a,b-1);
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