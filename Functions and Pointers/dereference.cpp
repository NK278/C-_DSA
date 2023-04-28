#include<bits/stdc++.h>
using namespace std;
int main(){
    // int x=122;
    // int* p=&x;
    // *p=6;
    // cout<<*p;
    int x,y;
    int* p1=&x;
    int* p2=&y;
    cout<<"Enter x:";
    cin>>*p1;
    cout<<"Enter y:";
    cin>>*p2;
    cout<<x+y;
    return 0;
}