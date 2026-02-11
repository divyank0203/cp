#include<bits/stdc++.h>
using namespace std;

using ll = long long ;
using ld = long double;
using vll = vector<ll>;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vll a(n);
        vll b(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        for(ll i=0; i<n; i++){
            cin>>b[i];
        }
        if(n==1){
            cout<<b[0]<<endl;
        }
        else{
            ll ans=0;
            for(ll i=0; i<n; i++){
                ans+=a[i];
            }
            ll res=LONG_MIN;
            for(ll i=0; i<n; i++){
                res=max(res, ans-a[i]+b[i]);
            }
            cout<<res<<endl;
        }

    }
}