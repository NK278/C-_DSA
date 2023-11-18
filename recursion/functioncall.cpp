#include<bits:stdc++>
using namespace std;
void gun(){
    cout<<"hello nish";
    return;
}
void fun(){
    cout<<"hello n";
    gun();
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fun();
    return 0;
}