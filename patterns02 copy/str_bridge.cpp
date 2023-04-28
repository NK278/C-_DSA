#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of lines :";
    cin>>n;
    int m=n-1;
    int nsp=1;
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<"\n";
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m-i+1;j++){
            cout<<"*";
    }
    for(int k=1;k<=nsp;k++){
        cout<<" ";
    }
    nsp+=2;
    for(int l=1;l<=m-i+1;l++){
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}