#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t; 
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(k>n){
            cout<<-1<<endl;
            continue;
        }
        ll ans = -1;

        for (int d = 0; d <= 60; d++) {
            ll pow2 = 1LL << d;
            if (pow2 > n) {
                break;
            }

            ll low = n / pow2;
            ll high = (n + pow2 - 1) / pow2;

            if (low <= k && k <= high) {
                ans = d;
                break;
            }
        }
        cout<<ans<<endl;
    }
}