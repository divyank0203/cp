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
        for(ll i=0;i<n;i++) cin>>a[i];
        ll ans = *max_element(a.begin(),a.end());
        cout<<ans<<endl;
    }
}