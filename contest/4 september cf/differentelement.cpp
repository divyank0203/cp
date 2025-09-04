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
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        unordered_map<ll, ll> mp;
        for(ll i=0; i<n; i++){
            mp[a[i]]++;
        }
        ll ans;
        for(auto it: mp){
            if(it.second==1){
                ans=it.first;
                break;
            }
        }
        for(ll i=0; i<n; i++){
            if(a[i]==ans){
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}