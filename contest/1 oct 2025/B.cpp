#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        ll ans=0; 
        for(ll i=(n-1); i>=0; i--){
            if(k==0){
                break;
            }
            ans+=a[i];
            k--;
        }
        cout<<ans<<endl;
    }
}