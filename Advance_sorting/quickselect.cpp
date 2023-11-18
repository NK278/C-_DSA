#include<bits:stdc++>
using namespace std;
// TC=O(nlogn)
// sp=O(logn)
void q_par(int v[],int si,int ei){
    int pivot=v[(si+ei)/2];
    int cnt=0;
    for(int i=si+1;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(v[i]<=pivot) cnt++;
    }
    int pi=cnt+si;
    swap(v[(si+ei)/2],v[pi]);
    int i=si,j=ei;
    while(i<pi and j>pi){
        if(v[i]<=pivot) i++;
        if(v[j]>pivot) j--;
        else if(v[i]>pivot and v[j]<=pivot){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    return pi;
}
int kthsmallest(int v[],int si,int ei,int k){
    int pi=q_par(v,si,ei);
    if(pi+1==k) return v[pi];
    else if(pi+1<k) return kthsmallest(v,pi+1,ei,k);
    else return kthsmallest(v,si,pi-1,k);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}