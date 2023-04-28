#include<bits/stdc++.h>
using namespace std;
void vect_in(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        int e;
        cout<<"Enter e:";
        cin>>e;
        v.push_back(e);
    }
}
vector<int> merge(vector<int>& v1,vector<int>& v2){
    int n=v1.size(),m=v2.size();
    vector<int> v(n+m);
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(v1[i]<v2[j]){
            v[k]=v1[i];
            i++;
        }
        else{
            v[k]=v2[j];
            j++;
        }
        k++;
    }
    // for remaining
    if(i>=n){
        while(j<=m-1){
            v[k]=v2[j];
            k++;
            j++;
        }
    }
    if(j>=m){
        while(i<=n-1){
            v[k]=v1[i];
            k++;
            i++;
        }
    }
    return v;
}
void merge2(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0&& j>=0){
            if(nums2[j]>nums1[i]){
                nums1[k]=nums2[j];
                j--;
            }
            else{
                nums1[k]=nums1[i];
                i--;
            }
            k--;
        }
        if(i<0){
            while(j>=0){
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        if(j<0){
            while(i>=0){
                nums1[k]=nums1[i];
                i--;
                k--;
            }
        }
        return;
    }
int main(){
    int n,m;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter m:";
    cin>>m;
    vector<int> v1;
    cout<<"Enter v1:";
    vect_in(v1,n);
    vector<int> v2;
    cout<<"Enter v2:";
    vect_in(v2,m);
    vector<int> v3=merge(v1,v2);
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;
    return 0;
}