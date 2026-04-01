#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, q;
    cin >> n >> q;

    vll a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    ll k = (ll)a.size();

    vll gaps;
    gaps.reserve(k - 1);
    for (ll i = 1; i < k; i++)
        gaps.push_back(a[i] - a[i-1]);

    sort(gaps.begin(), gaps.end());

    ll m = gaps.size();
    vll prefSum(m + 1, 0);
    for (ll i = 0; i < m; i++)
        prefSum[i+1] = prefSum[i] + gaps[i];

    while (q--) {
        ll x;
        cin >> x;

        ll pos = (lower_bound(gaps.begin(), gaps.end(), x) - gaps.begin());

        ll reduction = pos * x - prefSum[pos];
        cout << k * x - reduction << endl;
    }

    return 0;
}