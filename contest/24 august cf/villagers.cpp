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
        sort(a.begin(), a.end());
        if(n%2==0){
            ll ans=0;
            for(ll i=a.size()-1; i>=0; i-=2){
                ans+=max(a[i], a[i-1]);
            }
            cout<<ans<<endl;
        }

        else{
            ll ans=0;
            for(ll i=a.size()-1; i>=0; i-=2){
                if(i>0){
                ans+=max(a[i], a[i-1]);
                }
                else if(i==0){
                    ans+=a[0];
                }
            }
            cout<<ans<<endl;
        }
    }
}