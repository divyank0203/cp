#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin>>t; while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin>>a[i];
        unordered_map<ll, ll> mp;
        for(ll i = 0; i < n; i++){
            if(mp.find(a[i]) == mp.end()){
            mp[a[i]]=i+1;
            }
        }
        ll m = *max_element(a.begin(), a.end());
        ll ans = mp[m];
        cout<<ans<<endl;
    }
}