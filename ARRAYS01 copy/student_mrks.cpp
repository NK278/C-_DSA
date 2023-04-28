#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of students:";
    cin>>n;
    int mrks[n];
    cout<<"Enter marks:";
    for(int i=0;i<n;i++) cin>>mrks[i];
    for(int i=0;i<n;i++){
        if(mrks[i]<35) cout<<i<<" ";
    }
    return 0;
}