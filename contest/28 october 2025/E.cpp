// // #include<bits/stdc++.h>
// // using namespace std;
// // using ll = long long;
// // using vll = vector<ll>;
// // using pll = pair<ll, ll>;
// // using vvll = vector<vll>;
// // using vpll = vector<pll>;
// // #define pb push_back;

// // int main(){
// //     ll t;
// //     cin>>t;
// //     while(t--){
// //         ll n,k,x;
// //         cin>>n>>k>>x;
// //         vll a(n);
// //         for(ll i=0; i<n; i++){
// //             cin>>a[i];
// //         }
// //         vll ans(n);
// //         if(n==k){
// //             ans=a;
// //             for(ll i=0; i<n; i++){
// //                 cout<<ans[i]<<" ";
// //             }
// //             cout<<endl;
// //         }
// //         else if(k==1){

// //         }
// //         else{

// //         }

// //     }
// // }

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// // Merge overlapping intervals
// vector<pair<ll, ll>> merge_intervals(vector<pair<ll, ll>>& intervals) {
//     if (intervals.empty()) return {};
//     sort(intervals.begin(), intervals.end());
//     vector<pair<ll, ll>> merged;
//     pair<ll, ll> cur = intervals[0];
//     for (size_t i = 1; i < intervals.size(); ++i) {
//         if (intervals[i].first <= cur.second + 1) {
//             cur.second = max(cur.second, intervals[i].second);
//         } else {
//             merged.push_back(cur);
//             cur = intervals[i];
//         }
//     }
//     merged.push_back(cur);
//     return merged;
// }

// // Check if D allows selecting k numbers outside intervals
// bool can_select(const vector<ll>& a, ll k, ll x, ll D) {
//     if (D == 0) return (x + 1) >= k;
//     vector<pair<ll, ll>> intervals;
//     for (ll ai : a) {
//         ll l = max(0LL, ai - (D - 1));
//         ll r = min(x, ai + (D - 1));
//         if (l <= r) intervals.emplace_back(l, r);
//     }
//     if (intervals.empty()) return (x + 1) >= k;
//     auto merged = merge_intervals(intervals);
//     ll covered = 0;
//     for (auto& iv : merged) {
//         covered += (iv.second - iv.first + 1);
//     }
//     return (x + 1 - covered) >= k;
// }

// // Generate k valid numbers outside merged intervals
// vector<ll> generate_answer(const vector<ll>& a, ll k, ll x, ll D) {
//     vector<ll> ans;
//     if (D == 0) {
//         for (ll i = 0; i < k; ++i) ans.push_back(i);
//         return ans;
//     }
//     vector<pair<ll, ll>> intervals;
//     for (ll ai : a) {
//         ll l = max(0LL, ai - (D - 1));
//         ll r = min(x, ai + (D - 1));
//         if (l <= r) intervals.emplace_back(l, r);
//     }
//     auto merged = merge_intervals(intervals);
//     ll p = 0;
//     for (auto& iv : merged) {
//         while (p < iv.first && (ll)ans.size() < k) {
//             ans.push_back(p++);
//         }
//         p = max(p, iv.second + 1);
//         if ((ll)ans.size() >= k) break;
//     }
//     while ((ll)ans.size() < k && p <= x) {
//         ans.push_back(p++);
//     }
//     return ans;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int T;
//     cin >> T;
//     while (T--) {
//         int n;
//         ll k, x;
//         cin >> n >> k >> x;
//         vector<ll> a(n);
//         for (ll& ai : a) cin >> ai;
//         sort(a.begin(), a.end());

//         // Binary search for maximum D
//         ll lo = 0, hi = x + 1;
//         while (lo < hi) {
//             ll mid = lo + (hi - lo + 1) / 2;
//             if (can_select(a, k, x, mid)) lo = mid;
//             else hi = mid - 1;
//         }

//         vector<ll> ans = generate_answer(a, k, x, lo);
//         for (size_t i = 0; i < ans.size(); ++i) {
//             if (i) cout << ' ';
//             cout << ans[i];
//         }
//         cout << '\n';
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Interval {
    ll L, R;
};


vector<Interval> unify(vector<Interval>& segs) {
    if (segs.empty()) return {};
    sort(segs.begin(), segs.end(), [](auto& a, auto& b){
        return a.L < b.L;
    });

    vector<Interval> res;
    res.push_back(segs[0]);
    for (int i = 1; i < (int)segs.size(); i++) {
        if (segs[i].L <= res.back().R + 1)
            {
                res.back().R = max(res.back().R, segs[i].R);
            }
        else
            {
                res.push_back(segs[i]);
            }
        }
    return res;
}


bool feasible(const vector<ll>& friends, ll k, ll x, ll d) {
    vector<Interval> blocked;
    for (ll f : friends) {
        ll L = max(0LL, f - (d - 1));
        ll R = min(x, f + (d - 1));
        if (L <= R) {
            blocked.push_back({L, R});
        }
    }

    auto comp = unify(blocked);
    ll used = 0;
    for (auto& iv : comp)
        {
            used += (iv.R - iv.L + 1);
        }

    return (x + 1 - used) >= k;
}


vector<ll> construct(const vector<ll>& friends, ll k, ll x, ll d) {
    vector<ll> res;
    vector<Interval> blocked;
    for (ll f : friends) {
        ll L = max(0LL, f - (d - 1));
        ll R = min(x, f + (d - 1));
        if (L <= R) {
            blocked.push_back({L, R});
        }
    }

    auto compact = unify(blocked);
    ll cur = 0;
    for (auto& iv : compact) {
        while (cur < iv.L && (ll)res.size() < k)
            {
                res.push_back(cur++);
            }
        cur = max(cur, iv.R + 1);
        if ((ll)res.size() >= k) {
            break;
        }
    }

    while ((ll)res.size() < k && cur <= x)
        res.push_back(cur++);

    return res;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll k, x;
        cin >> n >> k >> x;
        vector<ll> pos(n);
        for (ll& v : pos) cin >> v;
        sort(pos.begin(), pos.end());

        ll low = 0, high = x + 1;
        while (low < high) {
            ll mid = (low + high + 1) / 2;
            if (feasible(pos, k, x, mid)) {
                low = mid;
            }
            else {
                high = mid - 1;
            }
        }

        auto chosen = construct(pos, k, x, low);
        for (int i = 0; i < (int)chosen.size(); i++) {
            if (i) {
                cout << " ";
            }
            cout << chosen[i];
        }
        cout << endl;
    }
}