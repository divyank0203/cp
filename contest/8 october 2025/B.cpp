#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, a, b;
        cin>>n>>a>>b;
        vector<pair<ll, ll>> p(n);
        for(ll i=0; i<n; i++){
            cin>>p[i].first;
            cin>>p[i].second;
        }
        ll ans=LONG_LONG_MAX;
        
        for(ll i=0; i<n; i++){
            ll c=(abs(p[i].first-a)+abs(p[i].second-b));
            ans=min(ans, c);
        }
        cout<<ans<<endl;
    }
}
