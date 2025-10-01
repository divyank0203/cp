#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
 ll t;
 cin>>t;
 while(t--){
    ll n, d;
    cin>>n>>d;

 }   
}

// #include <bits/stdc++.h>
// using namespace std;
// using int64 = long long;
// using i128 = __int128_t; // for safety with big multiplications

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while (T--) {
//         long long N, D;
//         cin >> N >> D;
//         long long ans = -1;

//         for (int k = 0; (1LL << k) <= N && k < 63; k++) {
//             long long pow2 = 1LL << k;
//             if ((N - pow2) % D != 0) continue;
//             long long Y = (N - pow2) / D;
//             if (Y < 0) continue;

//             long long q = Y >> k;             // floor(Y / 2^k)
//             long long r = Y & ((1LL << k) - 1); // Y mod 2^k
//             long long steps = k + q + __builtin_popcountll(r);

//             if (ans == -1 || steps < ans) ans = steps;
//         }
//         cout << ans << "\n";
//     }
// }
