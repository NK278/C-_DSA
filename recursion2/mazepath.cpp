#include<bits:stdc++>
using namespace std;
int path(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
   int rway=path(sr,sc+1,er,ec);
   int dway=path(sr+1,sc,er,ec);
   return rway+dway;
}
void printpath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    printpath(sr,sc+1,er,ec,s+'R');
    printpath(sr+1,sc,er,ec,s+'D');
}
int maze(int r,int c){
    if(r<1 || c<1) return 0;
    if(r==1 && c==1) return 1;
    return maze(r,c-1)+maze(r-1,c);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    printpath(1,1,4,4,"");
    return 0;
}