#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, x;
        cin>>n>>x;
        ll ans=0;
        ll msum=0;
        ll csum=0;
        for(ll j=n; j>=1; j--){
            ans=(j*x);
            csum=0;
            for(ll i=(n-j+1); i<=n; i++){
                csum+=i;
            }
            msum=max((csum-ans), msum);

        }
        cout<<msum<<endl;
    }
}