#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll p;
        cin >> p;
        p--; 
        ll x = a[p];
        
        
        ll L = 0;
        bool s = false;
        for(ll i = 0; i < p; i++){
            if(a[i] != x){
                if(!s){
                     L++; s = true;
                     }
            } else {
                s = false;
            }
        }
        
        
        ll R = 0;
        s = false;
        for(ll i = p+1; i < n; i++){
            if(a[i] != x){
                if(!s){ R++; s = true; }
            } else {
                s = false;
            }
        }
        
        cout << 2LL * max(L, R) << endl;
    }
}