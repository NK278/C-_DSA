#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int s=0;
    while(n>0){
        int x=n%10;
        s+=(x%2==0? x:0);
        n/=10;
    }
    cout<<s;
    return 0;
}