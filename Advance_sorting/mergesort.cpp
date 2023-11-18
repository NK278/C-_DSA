#include<bits:stdc++>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& res){
    int n=a.size(),m=b.size();
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            res[k++]=a[i++];
        }else{
            res[k++]=b[j++];
        }
    }
    if(i>=n){
        while(j<m){
            res[k++]=b[j++];
        }
    }
    if(j>=n){
        while(i<n){
            res[k++]=a[i++];
        }
    }
}
void mergesort(vector<int>& v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-n/2;
    vector<int> a(n1),b(n2);
    // copy
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    // magic
    mergesort(a);
    mergesort(b);
    // merge
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[]={1,3,6,77,9,0};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int> v(a,a+n);
    return 0;
}