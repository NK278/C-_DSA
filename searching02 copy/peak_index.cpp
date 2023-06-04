#include<bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr){
    int n = arr.size();
    int lo=1;
    int hi=n-2;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]>arr[mid+1] and arr[mid]>arr[mid-1]) return mid;
        else if(arr[mid]>arr[mid+1]) hi=mid-1;
        else lo=mid+1;
    }
    return -1;
}
void vector_in(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout<<"Enter n:"
    cin>>n;
    vector<int> arr;
    vector_in(arr,n);
    cout<<peakIndexInMountainArray(arr)<<endl;
    return 0;
}