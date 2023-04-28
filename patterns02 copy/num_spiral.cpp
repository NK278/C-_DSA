#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of lines :";
    cin>>n;
    int m=2*n-1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            int a=i;
            int b=j;
            if(a>n) a=2*n-i;
            if(b>n) b=2*n-j;
            int x=min(a,b);
            cout<<n-x+1;
        }
        cout<<endl;
    }
    return 0;
}