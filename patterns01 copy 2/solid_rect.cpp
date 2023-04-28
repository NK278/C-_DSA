#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter no of rows:";
    cin>>n;
    cout<<"Enter no of coloumns:";
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}