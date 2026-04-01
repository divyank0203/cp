#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long> ;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vll a(n);
        ll ans=0;
        unordered_map<ll,ll> mp;
        for(ll i=1; i<=n; i++){
            int x;
            cin>>x;
            int k=(x-i);
            ans+=mp[k];
            mp[k]++;
        }
        cout<<ans<<endl;
    }
}