#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    if(n==0){
        return;
    }
    if(n==1){
        cout<<1;
    }
    else{cout<<n<<" ";}
    solve(n-1);
    
}
// void ilr(int n){
//     if(n==0){
//         return;
//     }
//     ilr(n-1);
//     cout<<"I love Recursion"<<endl;
// }
int main(){
int m;
cin>>m;
solve(m);
}