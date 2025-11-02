#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, x;

        cin>>n>>x; 
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        ll ans=0;
        ll sum=0;
        ll curr;
        ll prev=0;
        for(ll i=0; i<n; i++){
            sum+=a[i];
            curr=(sum/x);
            if(curr>prev){
                ans+=a[i];
            }
            prev=curr;
        }
        cout<<ans<<endl;
        for(ll i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}