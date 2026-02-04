#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;

        vector<ll> P(n);
        for (int i = 0; i < n; i++) cin >> P[i];

        ll dp0 = 0;               
        ll dp1 = LLONG_MIN / 2;   
        ll dp2 = LLONG_MIN / 2;    

        ll buy_price = LLONG_MAX;
        ll sell_price = LLONG_MIN;

        for (ll p : P) {
            ll new_dp0 = dp0;

            if (dp1 > LLONG_MIN / 3 && p - buy_price - k > 0)
                new_dp0 = max(new_dp0, dp1 + 1);

            if (dp2 > LLONG_MIN / 3 && sell_price - p - k > 0)
                new_dp0 = max(new_dp0, dp2 + 1);

            dp1 = max(dp1, dp0);
            buy_price = min(buy_price, p);

            dp2 = max(dp2, dp0);
            sell_price = max(sell_price, p);

            dp0 = new_dp0;
        }

        cout << dp0 << endl;
    }
    
}
