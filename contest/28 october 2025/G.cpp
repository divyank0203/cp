#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {

    ll T;
    cin >> T;
    while (T--) {
        ll n;
        cin >> n;

        vector<ll> val(n), cost(n);
        for(ll i=0; i<n; i++){
            cin>>val[i];
        }
        ll total = 0;
        for (auto &x : cost) {
            cin >> x;
            total += x;
        }

        vector<ll> best(n, 0);
        ll keep_sum = 0;

        for (ll i = 0; i < n; ++i) {
            ll best_here = cost[i];
            
            for (ll j = i - 1; j >= 0; --j) {
                if (val[j] <= val[i])
                    {
                        best_here = max(best_here, best[j] + cost[i]);
                    }
            }
            best[i] = best_here;
            keep_sum = max(keep_sum, best_here);
        }

        cout << total - keep_sum << endl;
    }
}
