#include<bits/stdc++.h>
using namespace std;
void fun(int x,int y){
    cout<<"Addr.fun x:"<<&x<<"\n";
    cout<<"Addr. fun y:"<<&y<<"\n";
}
int main(){
    int x=10,y=20;
    cout<<"Addr. x:"<<&x<<"\n";
    cout<<"Addr. y:"<<&y<<"\n";
    fun(x,y);
    return 0;
}