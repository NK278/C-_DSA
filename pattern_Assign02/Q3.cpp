#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<" No of lines:";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        char x=a+'A'-1;
        for(int k=1;k<=i;k++){
            // char x=a+'A'-1;
            cout<<(x);
            x--;
        }
        a++;
        char y='A'+1;
        for(int l=i-1;l>=1;l--){
            // char y=i+'A'-1;
            cout<<y;
            y++;
            // b++;
        }
        // b++;
        cout<<endl;
    }
    return 0;
}