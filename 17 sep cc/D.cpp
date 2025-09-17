#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        ll ans=0;
        for(ll i=0; i<n; i++){
            ans=(a[i]+1)%m;
            if(ans<a[i]){
                a[i]=ans;
            }
        }
        ll sum = accumulate(a.begin(), a.end(), ll(0));
        cout<<sum<<endl;
    }
}