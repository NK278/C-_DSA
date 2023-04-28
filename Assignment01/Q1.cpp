#include<bits/stdc++.h>
using namespace std;
int main(){
    // Armstrong number
       for(int x=1;x<=500;x++){
        int sum=0;
        int t=x;
        while(t>0){
            int d=t%10;
            sum+=(d*d*d);
            t/=10;
        }
        if(x==sum) cout<<x<<"\n";
       }
       return 0;
    }
