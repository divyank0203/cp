#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<ll> p(n+1);
    for(ll i=1; i<=n; i++){
        cin>>p[i];
    }
    vector<ll> q=p;
    for(ll i=1; i<=n; i++){
        for(ll j=1; j<=n; j++){
            q[i]^=(i%j);
        }
    }
    ll ans=q[1];
    for(ll i=2; i<=n; i++){
        ans^=q[i];
    }
    cout<<ans;
}