#include<bits/stdc++.h>
using namespace std;
 vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        vector<int> v(k);
        if(x<arr[0]){
            for(int i=0;i<k;i++){
                v[i]=arr[i];
            }
            return v;
        }
        if(x>arr[n-1]){
            int i=n-1,j=k-1;
            while(j>=0){
                v[j]=arr[i];
                j--;
                i--;
            }
            return v;
        }
        int lo=0;
        int hi=n-1;
        int t=0;
        int m=-1;
        bool f=false;
        while(lo<=hi){
            m=lo+(hi-lo)/2;
            if(arr[m]==x){
                f=true;
                v[t]=arr[m];
                t++;
                break;
            }
            else if(arr[m]>x) hi=m-1;
            else lo=m+1;
        }
        int l_b=hi;
        int u_b=lo;
        if(f==true){
            l_b=m-1;
            u_b=m+1;
        }
        while(t<k && l_b>=0 && u_b<=n-1){
            int d1=abs(x-arr[l_b]);
            int d2=abs(x-arr[u_b]);
            if(d1<=d2){
                v[t]=arr[l_b];
                l_b--;
            }else{
                v[t]=arr[u_b];
                u_b++;
            }
            t++;
        }
        if(l_b<0){
            while(t<k){
                v[t]=arr[u_b];
                u_b++;
                t++;
            }
        }
        if(u_b>n-1){
            while(t<k){
                v[t]=arr[l_b];
                l_b--;
                t++;
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,k;
    cout<<"Enter n:"
    cin>>n;
    cout<<"Enter x:"
    cin>>x;
    cout<<"Enter k:"
    cin>>k;
    vector<int> arr;
    vector_in(arr,n);
    vector<int> v=findClosestElements(arr,k,x);
    return 0;
}