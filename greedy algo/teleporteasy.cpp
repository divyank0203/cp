#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, c;
        cin>>n>>c;
        vector<ll> a(n);
        vector<ll> b(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
            b[i]=(a[i]+i+1);
        }
        ll ans=0;
        sort(b.begin(), b.end());
        for(ll i=0; i<n; i++){
            if(b[i]<=c){
                ans++;
                c-=b[i];
            }
            else{
                break;
            }
        }
        cout<<ans<<endl;
    }
}