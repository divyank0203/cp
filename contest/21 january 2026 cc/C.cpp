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
        for(ll i=n-1; i>=0; i--){
            if(i==n-1){
                if(a[i]!=n){
                    ans=a[i];
                    break;
                }
                else{
                    continue;
                }
            }
            else{
                if(a[i]!=i+1){
                    ans=a[i];
                    break;
                }
                else{
                    continue;
                }
            }
        }
        cout<<ans<<endl;
    }
}