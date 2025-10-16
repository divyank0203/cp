#include<bits/stdc++.h>
using ll = long long;

using namespace std;
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
        sort(a.begin(), a.end());
        ll m1 = a[0];
        ll m2=a[0];
        ll ans=LONG_LONG_MAX;
        for(ll i=0; i<n; i++){
            m1=m1&a[i];
        }
        // for(ll i=1; i<n; i++){
        //     m2 = m1 & a[i];
        //     ans=min(ans, m2);
        // }
        // for(ll i=1; i<n; i++){
        //     m1 = m1 & a[i];
        //     ans=min(ans, m1);
        //     m1=a[i];
        // }
        cout<<m1<<endl;
        
    }
}