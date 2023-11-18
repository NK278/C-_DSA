#include<bits:stdc++>
using namespace std;
void pnto1(int i,int n){
    if(i>n) return;
    cout<<i<<" ";
    pnto1(i+1,n);
}
void print(int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<" ";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
//    pnto1(1,n);
    print(n);
    return 0;
}