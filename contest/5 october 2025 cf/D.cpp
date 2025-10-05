#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
using vll = vector<ll>;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll w=n;
        ll l=0;
        ll ans=0;
        while(w>0){
            ans+=(w/2);
            ans+=(l/2);
            l-=(l/2);
            l+=(w/2);
            w=(w/2)+(w%2);
            
            if(w==1&&l==1){
                ans++;
                break;
            }
        }
        cout<<ans<<endl;
    }
}