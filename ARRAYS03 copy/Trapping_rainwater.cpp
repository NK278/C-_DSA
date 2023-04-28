#include<bits/stdc++.h>
using namespace std;
void swap(int* x,int*y){
    int t=*x;
    *x=*y;
    *y=t;
}
void rev_part(vector<int>& v,int st,int e){
    while(st<=e){
         swap(&v[st],&v[e]);
         st++;
         e--;
    }
}
void vect_in(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        int e;
        cout<<"Enter e:";
        cin>>e;
        v.push_back(e);
    }
}
int trap(vector<int>& height){
    int n=height.size();
    int prev[n];
    prev[0]=-1;
    int max=height[0];
    for(int i=1;i<n;i++){
        prev[i]=max;
        if(max<height[i]) max=height[i];
    }
    int next[n];
    next[n-1]=-1;
    max=height[n-1];
    for(int i=n-2;i>=0;i--){
        next[i]=max;
        if(max<height[i]) max=height[i];
    }
    for(int i=0;i<n;i++){
        prev[i]=min(prev[i],next[i]);
    }
    int water=0;
    for(int i=1;i<n-1;i++){
        if(height[i]<prev[i]) water+=abs(height[i]-prev[i]);
    }
    return water;
}
int trap2(vector<int>& height){
    int n=height.size();
    int n=height.size();
    int prev[n];
    prev[0]=-1;
    int max=height[0];
    for(int i=1;i<n;i++){
        prev[i]=max;
        if(max<height[i]) max=height[i];
    }
    prev[n-1]=-1;
    max=height[n-1];
    for(int i=n-2;i>=0;i--){
        if(max<prev[i]) prev[i]=max;
        if(max<height[i]) max=height[i];
    }
    int water=0;
    for(int i=1;i<n-1;i++){
        if(height[i]<prev[i]) water+=abs(height[i]-prev[i]);
    }
    return water;
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    vector<int> v;
    vect_in(v,n);
    cout<<trap(v);
    return 0;
}