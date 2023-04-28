#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int x;
    cout<<"Enter ele. you want to search:";
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int res=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x) res=i;
        else res=-1;
    }
    if(res!=-1) cout<<"Ele. is present at:"<<res;
    else cout<<"Ele. DNE";
    return 0;
}