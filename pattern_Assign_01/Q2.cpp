#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows:";
    cin>>n;
    for(int i=1;i<=n+1;i++){
        for(int j=1;j<=i;j++){
            char x=(int)'A' +j -1;
            if(i%2==0) cout<<x;
            else cout<<j;
        }
        cout<<endl;
    }
    return 0;
}