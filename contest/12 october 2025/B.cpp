
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
   
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> b(n + 1, 0);
        for (ll i = 1; i <= n; i++){
             cin >> b[i];
        }

        vector<ll> a(n + 1);
        ll next_val = 1;

        for (ll i = 1; i <= n; i++) {
            ll d = b[i] - b[i - 1];
            ll p = i - d;
            if (p == 0) a[i] = next_val++;
            else a[i] = a[p];
        }

        for (ll i = 1; i <= n; i++){
             cout << a[i] << " ";
        }
        cout<<endl;
    }
}
