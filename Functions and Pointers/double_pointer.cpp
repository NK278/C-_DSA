#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=4;
    int* p=&x;
    int** p1=&p;
    cout<<p<<endl;
    cout<<p1<<endl;
    return 0;
}