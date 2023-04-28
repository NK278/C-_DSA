#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<" No of lines:";
    cin>>n;
   
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
            
        }
        int a=1;
        for(int k=1;k<=i;k++){
            cout<<k;
            a++;
        }
        for(int l=i-1;l>=1;l--){
            cout<<a;
            a++;
            
        }
        cout<<endl;
    }
    return 0;
}