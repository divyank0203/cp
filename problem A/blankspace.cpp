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
        ll ans=0;
        ll cunt=0;
        for(ll i=0; i<n; i++){
            if(a[i]==0){
                cunt++;
            }
            else if(a[i]==1){
                ans=max(ans, cunt);
                cunt=0;
            }
        }
        ans=max(ans, cunt);
        cout<<ans<<endl;
        
    }
}