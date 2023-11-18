#include<bits:stdc++>
using namespace std;
int hcf(int a,int b){ // TC=O(min(a,b))
    for(int i=min(a,b);i>=2;i--){
        if(a%i==0 && b%i==0) return i;
    }
    return 1;
}
int hcf_r(int a,int b){ // TC=O(log(a+b))
    if(a==0) return b;
    else return hcf_r(b%a,a); 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}