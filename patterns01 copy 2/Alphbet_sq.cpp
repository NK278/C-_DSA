#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows/col. :";
    cin>>n;
    for(int i=1;i<=n;i++){
        char x='A';
        for(int j=1;j<=n;j++){
            cout<<x;
            x++;
        }
        cout<<"\n";
    }
    return 0;
}