#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=4;
    int* p=&x;
    cout<<*p<<endl;
    *p+=1;
    cout<<*p<<endl;
    return 0;
}