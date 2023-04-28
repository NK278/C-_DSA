#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int m=2*n-1;
    int nst=1;
    int nsp=1;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        // if(i<n-1) nst++;
        // else nst--;
        for(int k=1;k<=2*(n-i)-1;k++){
            cout<<" ";
        }
        // if(i>n) nsp+=2;
        // else nsp-=2;
        for(int l=1;l<=i;l++){
            cout<<"*";
        }
        // if(i<n-1) nst++;
        // else nst--;
        cout<<endl;
    }
    for(int i=1;i<=2*n-1;i++) cout<<"*";cout<<endl;
    for(int i=1;i<=2*n-1;i++) cout<<"*";cout<<endl;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        // if(i<n-1) nst++;
        // else nst--;
        for(int k=1;k<=2*(i)-1;k++){
            cout<<" ";
        }
        // if(i>n) nsp+=2;
        // else nsp-=2;
        for(int l=1;l<=n-i;l++){
            cout<<"*";
        }
        // if(i<n-1) nst++;
        // else nst--;
        cout<<endl;
    }
    return 0;
}