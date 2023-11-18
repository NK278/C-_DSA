#include<bits:stdc++>
using namespace std;
void subset_arr(vector<int>& v,int n,int idx,vector<int> ans,int k){
    if(idx==n){
        if(ans.size()==k){
            for (int i = 0; i < ans.size(); i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(ans.size()+(n-idx)<k) return;
    subset_arr(v,n,idx+1,ans,k);
    ans.push_back(v[idx]);
    subset_arr(v,n,idx+1,ans,k);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}