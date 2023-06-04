#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arrangeCoins(int n){
     ll lo=1,hi=n;
    while(lo<=hi){
        ll mid=lo+(hi-lo)/2;
        if(mid*(mid+1)/2==n) return (int)mid;
        if(mid*(mid+1)/2>n) hi=mid-1;
        else lo=mid+1;
    }
    return (int)hi;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}