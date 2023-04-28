#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines :";
    cin>>n;
    int m=n-1;
    int nsp=1;
    for(int i=1;i<=2*n-1;i++){
        cout<<(char)(i+'A'-1);
    }
    cout<<"\n";
    for(int i=1;i<=m;i++){
        int a=1;
        for(int j=1;j<=m-i+1;j++){
            cout<<(char)(a+'A'-1);
            a++;
    }
    for(int k=1;k<=nsp;k++){
        cout<<" ";
        a++;
    }
    nsp+=2;
    for(int l=1;l<=m-i+1;l++){
        cout<<(char)(a+'A'-1);
        a++;
    }
    cout<<endl;
}
return 0;
}