// #include <bits/stdc++.h>
// using namespace std;
// using ll = ll;
// int main(){
   
    
//     ll T;
//     cin >> T;
    
//     while(T--) {
//         ll N, K, S, M;
//         cin >> N >> K >> S >> M;
        
//         if (N == 1) {
//             cout << K << endl;
//             continue;
//         }
        
//         ll lo = (M == 1) ? 2 : 1;
//         ll hi = (M == N) ? N - 1 : N;
        
//         auto achievable = [&](ll k, ll R) -> bool {
//             if (k == 0) return R == 0;
//             if (R < k * lo || R > k * hi) {
//                 return false;
//             }
            
//             if (lo == M - 1 && hi == M + 1) {
                
//                 return (R - k * lo) % 2 == 0;
//             }
//             if (lo == M - 1) {
                
//                 return R != k * lo + 1;
//             }
//             if (hi == M + 1) {
                
//                 return R != k * hi - 1;
//             }
//             return true;
//         };
        
//         ll ans = K;
//         for (ll m = 0; m <= K; m++) {
//             if (achievable(K - m, S - m * M)) {
//                 ans = m;
//                 break;
//             }
//         }
        
//         cout << ans << endl;
//     }
    
    
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ll T;
    cin >> T;

    while (T--) {
        ll n, k, s, m;
        cin >> n >> k >> s >> m;

        if (n == 1) {
            cout << k << endl;
            continue;
        }

        ll l = 1, r = n;
        if (m == 1) {
            l = 2;
        }
        if (m == n) {
            r = n - 1;
        }

        ll ans = k;

        for (ll take = 0; take <= k; take++) {
            ll rem = k - take;
            ll need = s - take * m;

            bool ok = true;

            if (rem == 0) {
                if (need != 0) {
                    ok = false;
                }
            } else {
                if (need < rem * l || need > rem * r) {
                    ok = false;
                }

                if (ok) {
                    if (l == m - 1 && r == m + 1) {
                        if ((need - rem * l) % 2) {
                            ok = false;
                        }
                    } else if (l == m - 1) {
                        if (need == rem * l + 1) {
                            ok = false;
                        }
                    } 
                    else if (r == m + 1) {
                        if (need == rem * r - 1) {
                            ok = false;
                        }
                    }
                }
            }

            if (ok) {
                ans = take;
                break;
            }
        }

        cout << ans << endl;
    }

    
}