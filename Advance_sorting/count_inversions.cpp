#include<bits:stdc++>
using namespace std;
// int count_inv(vector<int>& v){
//     int n=v.size();
//     int c=0;
//     for(int i=0;i<n-1;i++){
//         for(j=i+1;j<n;j++){
//             if(v[i]>v[j]) c++;
//         }
//     }
//     return c;
// }
int inversion(vector<int>& a,vector<int>& b){
    int i=0,j=0;
    int cnt=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            cnt+=(a.size()-1);
            j++;
        }else{
            i++;
        }
    }
    return cnt;
}
void merge(vector<int>& a,vector<int>& b,vector<int>& res){
    int n=a.size(),m=b.size();
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            res[k++]=a[i++];
        }else{
            res[k++]=res[j++];
        }
    }
    if(j>=m){
        while(i<n){
            res[k++]=a[i++];
        }
    }
    if(i>=n){
        while(j<m){
            res[k++]=b[j++];
        }
    }
}
int count_inv(vector<int>& v){
    int c=0;
    int n=v.size();
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    c+=count_inv(a);
    c+=count_inv(b);
    c+=inversion(a,b);
    merge(a,b,v);
    a.clear();
    b.clear();
    return c;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}