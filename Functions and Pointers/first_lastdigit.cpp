#include<bits/stdc++.h>
using namespace std;
void f_ls_fs(int n,int* x,int* y){
    *x=n%10;
    while(n>9){
        n/=10;
    }
    *y=n;
}
int main(){
    int* ptr=NULL; // reserved address
    // \0-> null character, ascii=0
    int n;
    cout<<"Enter n:";
    cin>>n;
    int fr_d,ls_d;
    int* p1=&fr_d;
    int* p2=&ls_d;
    f_ls_fs(n,p1,p2);
    cout<<fr_d<<" "<<ls_d;
    return 0;
}