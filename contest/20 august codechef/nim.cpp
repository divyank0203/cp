#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 998244353;

ll power(ll base, ll exp, ll mod = MOD) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

ll modinv(ll a, ll mod = MOD) {
    return power(a, mod - 2, mod);
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
        for (ll i = 0; i < n; i++) cin >> a[i];

        if (n == 1) {
            if (a[0] == 1) cout << "1\n";
            else cout << modinv(2) << "\n";
        } else {
            bool same = true;
            for (ll i = 1; i < n; i++) {
                if (a[i] != a[0]) {
                    same = false;
                    break;
                }
            }
            if (same) cout << "0\n";
            else cout << modinv(2) << "\n";
        }
    }
    return 0;
}
