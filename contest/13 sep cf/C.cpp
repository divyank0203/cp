

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, m, x, y;
        cin>>n>>m>>x>>y;
        vector<ll> a(n);
        vector<ll> b(m);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        for(ll i=0; i<m; i++){
            cin>>b[i];
        }
        cout<<(n+m)<<endl;
    }
}