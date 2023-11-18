#include<bits:stdc++>
using namespace std;
void hanoi(int n,char s,char h,char d){
    if(n==0) return;
    hanoi(n-1,s,d,h);
    cout<<s<<"->"<<d<<endl;
    hanoi(n-1,h,s,d);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=3;
    hanoi(3,'A','B','C');
    return 0;
}