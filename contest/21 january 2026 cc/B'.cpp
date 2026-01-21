#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll> a(n);
        vector<ll> b(m);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        for(ll i=0; i<m; i++){
            cin>>b[i];
        }
        ll ans=0;
        for(ll i=0; i<n; i++){
            for(ll j=0; j<m; j++){
                if(b[j]<a[i]){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;


    }
}