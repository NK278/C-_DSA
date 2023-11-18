#include<bits:stdc++>
using namespace std;
void p1ton(int n){
    if(n==0) return;
    cout<<n<<" ";
    p1ton(n-1);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
   p1ton(n);
    return 0;
}