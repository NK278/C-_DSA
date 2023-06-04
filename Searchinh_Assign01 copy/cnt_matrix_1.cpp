#include<bits/stdc++.h>
using namespace std;
void vector_in(vector<int>& v,int n){
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
}
int cnt_1(vector<int>& v){
    int n=v.size();
    int lo=0,hi=n-1;
    bool f=false;
    int fidx=-1
     while(lo<=hi){
            int mid=lo+((hi-lo)/2);
            if(v[mid]==1){
                if(mid==0){
                    fidx=mid
                    break;
                }
                else if(v[mid-1]!=1){
                    fidx=mid;
                    break;
                }else{
                    hi=mid-1;
                }
            }
            else if(v[mid]>1) hi=mid-1;
            else if(v[mid]<1) lo=mid+1;
        }
        if(fidx==-1) return 0;
        else return n-fidx;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n.m;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter m:";
    cin>>m;
    vector<vector<int > > v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    int row=0;
    int mx1=0;
    for(int i=0;i<m;i++){
        int lo=0,hi=n-1;
        int cnt=0
        int fidx=-1
        while(lo<=hi){
                int mid=lo+((hi-lo)/2);
                if(v[i][mid]==1){
                    if(mid==0){
                        fidx=mid
                        break;
                    }
                    else if(v[i][mid-1]!=1){
                        fidx=mid;
                        break;
                    }else{
                        hi=mid-1;
                    }
                }
                else if(v[i][mid]>1) hi=mid-1;
                else lo=mid+1;
            }
            if(fidx!=-1) cnt=n-fidx;
            if(mx1<cnt){
                mx1=cnt;
                row=i;
            }
    }
    cout<<row<<" "<<mx1;
    return 0;
}