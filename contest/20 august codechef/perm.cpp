#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 998244353;

ll power(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

ll modinv(ll a) {
    return power(a, MOD - 2, MOD);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll max_stones = 0;
        
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            max_stones = max(max_stones, a[i]);
        }
        
        
        vector<ll> dp(max_stones + 1, 0);
        dp[0] = 0; 
        
        for (ll x = 1; x <= max_stones; x++) {
            
            ll sum_dp = 0;
            for (ll r = 0; r < x; r++) {
                sum_dp = (sum_dp + dp[r]) % MOD;
            }
            
           
            ll numerator = (x - sum_dp + MOD) % MOD;
            dp[x] = (numerator * modinv(x)) % MOD;
        }
        
        
        ll nim_xor = 0;
        for (ll i = 0; i < n; i++) {
            nim_xor ^= a[i];
        }
        
        if (nim_xor == 0) {
            
            cout << 0 << "\n";
        } else {
            
            ll result = 1;
            for (ll i = 0; i < n; i++) {
                result = (result * dp[a[i]]) % MOD;
            }
            cout << result << "\n";
        }
    }
    
    
}
