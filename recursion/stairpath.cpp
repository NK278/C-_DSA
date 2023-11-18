#include<bits:stdc++>
using namespace std;
int stairpath(int n){
   if(n==1) return 1;
   if(n==2) return 2;
   return stairpath(n-1)+stairpath(n-2); 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<stairpath(n);
    return 0;
}