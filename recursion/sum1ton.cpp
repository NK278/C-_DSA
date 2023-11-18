#include<bits:stdc++>
using namespace std;
void sum(int s,int n){
    if(n==0){
        cout<<s<<" ";
        return;
    }
    sum(s+n,n-1);
}
int sumn(int n){
    if(n==0) return 0;
    else{
        return (sumn(n-1)+n);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
    sum(0,n);
    return 0;
}