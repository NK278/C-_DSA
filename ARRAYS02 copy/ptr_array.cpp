#include<bits/stdc++.h>
using namespace std;
void display(int* a,int n){
    for(int i=0;i<n;i++){
         cout<<*a<<" ";
         a++;
    }
}
int main(){
    int arr[]={1,4,2,7,4};
    int* ptr=arr;
    cout<<ptr<<endl;
    ptr[0]=8;
    display(ptr,5);
    return 0;
}