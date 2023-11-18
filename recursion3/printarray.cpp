#include<bits:stdc++>
using namespace std;
void diaplay_ar(int arr[],int n,int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    diaplay_ar(arr,n,idx+1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}