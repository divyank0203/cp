#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        unordered_map<ll, ll> mp;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        ll ans=0;
        ans+=(mp[1]*(mp[1]-1))/2;
        ans+=(mp[1]*mp[2]);
        ans+=(mp[2]*mp[3]);
        cout<<ans<<endl;
    }
}