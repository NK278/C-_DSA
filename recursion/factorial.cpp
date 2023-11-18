#include<bits:stdc++>
using namespace std;
int fact(int n){
    if (n<=1)
        return 1;
    else 
        return n*fact(n-1);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}