#include<bits:stdc++>
using namespace std;
void cuclic_sort(int arr[]){
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(i<n){
        int cidx=arr[i]-1;
        if(i==cidx) i++;
        else swap(arr[i],arr[cidx]);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}