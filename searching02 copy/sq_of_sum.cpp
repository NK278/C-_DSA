#include<bits/stdc++.h>
using namespace std;
bool isp(int n){
        int r=sqrt(n);
        if(r*r==n) return true;
        else return false;
    }
bool judgeSquareSum(int c) {
        int x=0;
        int y=c;
        while(x<=y){
            if(isp(x) and isp(y)) return true;
            else if(!isp(y)){
                y=(int)sqrt(y)*(int)sqrt(y);
                x=c-y;
            }else{
                x=((int)sqrt(x)+1)*((int)sqrt(x)+1);
                y=c-x;
            }
        }
        return false;
    }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<judgeSquareSum(n)<<endl;
    return 0;
}