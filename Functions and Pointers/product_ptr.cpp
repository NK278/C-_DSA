#include<bits/stdc++.h>
using namespace std;
int pdt(int* x,int* y){
    return (*x)*(*y);
}
int main(){
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<pdt(&a,&b);
    return 0;
}