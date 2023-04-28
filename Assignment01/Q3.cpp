#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int s=n;
    int rev=0;
    while(s>0){
        rev*=10;
        rev+=s%10;
        s/=10;
    }
    cout<<n+rev<<"\n";
    return 0;
}