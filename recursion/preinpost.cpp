#include<bits:stdc++>
using namespace std;
void pip(int n){
    if(n==0) return;
    cout<<"Pre"<<n<<endl;
    pip(n-1);
    cout<<"IN"<<n<<endl;
    pip(n-1);
    cout<<"Post"<<n<<endl;
}
void zigzag(int n){
    if(n==0) return;
    cout<<n;
    zigzag(n-1);
    cout<<n;
    zigzag(n-1);
    cout<<n;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout<<"Enter n:";
    cin>>n;
    // pip(n);
    zigzag(n);
    return 0;
}