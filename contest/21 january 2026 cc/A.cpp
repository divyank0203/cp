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
        unordered_map<ll, ll> freq;
        for(ll i=0; i<n; i++){
            freq[a[i]]++;
        }
        ll ans=0;
        ll f2=0;
        for(auto it: freq){
            if(it.second>f2){
                f2=it.second;
                ans=it.first;
            }
            else if(it.second==f2){
                ans=min(ans, it.first);

            }
        }
        cout<<ans<<endl;
    }
}