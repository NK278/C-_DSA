#include<bits:stdc++>
using namespace std;
// vector<vector<int> > subarry(vector<int>& v){
//     vector <vector<int> > res;
//     int n=v.size();
//     for(int i=0;i<n;i++){
//       for(int k=i;k<n;k++){
//         for(int j=i;j<=k;j++){
//             res.push_back(v[j]);
//         }
//       }
//     }
//     return res;
// }
void subarry2(vector<int> v,int g[],int n,int idx){
     if(idx==n){
        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        return;
     }
     subarry2(v,g,n,idx+1);
     if(v.size()==0 || g[idx-1]==v[v.size()-1]){
        v.push_back(g[idx]);
        subarry2(v,g,n,idx+1);
     }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
   int g[]={1,2,3};
    subarry2(v,g,3,0);
    return 0;
}