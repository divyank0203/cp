#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    ll t; cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> cnt(n+2,0);
        for(ll i=0;i<n;i++){
            ll x; 
            cin>>x;
            cnt[x]++;
        }
        ll missing=0;
        for(ll k=0;k<=n;k++){
            ll ans=max(missing,cnt[k]);
            if(k>0){
                cout<<" ";
            }
            cout<<ans;
            if(cnt[k]==0) missing++;
        }
        cout<<endl;
    }
}