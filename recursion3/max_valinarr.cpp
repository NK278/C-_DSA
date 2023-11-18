#include<bits:stdc++>
using namespace std;
void printmax(vector<int>& v,int idx,int max){
    if(idx==v.size()){
        cout<<max<<" ";
        return ;
    }
    if(max<v[idx]) max=v[idx];
    printmax(v,idx+1,max);
}
int max_v(vector<int>& v,int idx){
    if(idx==v.size()) return INT_MIN;
    return max[idx],max_v(v,idx+1));
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
    int n;cin>>n;
    vector<int> v;
    vector_in(v,n);
    cout<<max_v(v,0);
    return 0;
}