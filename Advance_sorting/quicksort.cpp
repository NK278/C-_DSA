#include<bits:stdc++>
using namespace std;
// TC=O(nlogn)
// sp=O(logn)
int partition(int arr[],int si,int ei){
    int pivot=arr[(si+ei)/2];
    int cnt=0;
    for(int i=si+1;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivot) cnt++;
    }
    int pi=cnt+si;
    swap(arr[(si+ei)/2],arr[pi]);
    int i=si,j=ei;
    while(i<pi and j>pi){
        if(arr[i]<=pivot) i++;
        if(arr[j]>pivot) j--;
        else if(arr[i]>pivot and arr[j]<=pivot){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pi;
}
void Quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi=partition(arr,si,ei);
    Quicksort(arr,si,pi-1);
    Quicksort(arr,pi+1,ei);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[]={1,0,-5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    Quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}