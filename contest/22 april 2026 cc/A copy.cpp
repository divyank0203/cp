#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    ll t; cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        ll ans=0;
        for(ll i=0; i<n; i++){
            ll l=0;
            ll r=0;
            for(ll j=0; j<i; j++){
                if(a[j]<a[i]){
                    l++;
                }
            }
            for(ll j=i+1; j<n; j++){
                if(a[j]>a[i]){
                    r++;
                }
            }
            if(l==r){
                ans++;
            }
        }
        cout<<ans<<endl;
        
    }
}