#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];
        
        vector<ll> order(n);
        iota(order.begin(), order.end(), 0);
        sort(order.begin(), order.end(), [&](ll x, ll y) {
            return a[x] > a[y];
        });
        
        set<ll> seen;
        seen.insert(-1);
        seen.insert(n);
        
        long long ans = 0;
        
        for (ll i : order) {
            auto it = seen.insert(i).first;
            
            auto lit = prev(it);
            auto rit = next(it);
            
            ll l = *lit;
            ll r = *rit;
            
            ll pl = (l == -1) ? -1 : *prev(lit);
            ll pr = (r == n) ?  n : *next(rit);
            
            if (l != -1) {
                ans += (long long)a[i] * (l - pl) * (r - i);
            }
            if (r != n) {
                ans += (long long)a[i] * (i - l) * (pr - r);
            }
        }
        
        cout << ans << endl;


    }
}