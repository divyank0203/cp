#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(ll s, ll e, ll &cunt, ll ans){
    if(ans==e){
        cunt++;
        return;
    }
    if(ans>e){
        return;
    }
    solve(s, e, cunt, ans+1);
    
    solve(s, e, cunt, ans+2);
    
    solve(s, e, cunt, ans+3);
    
}
int main(){
    ll s, e;
    cin>>s>>e;
    ll cunt=0;
    solve(s, e, cunt, s);
    cout<<cunt<<endl;
}