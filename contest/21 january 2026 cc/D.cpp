// // #include<bits/stdc++.h>
// // using namespace std;
// // using ll = long long;
// // int main(){
// //     ll t;
// //     cin>>t;
// //     while(t--){
// //         ll n;
// //         cin>>n;
// //         vector<ll> a(n);
// //         for(ll i=0; i<n; i++){
// //             cin>>a[i];
// //         }
// //         ll earning=0;
// //         ll watch=0;
// //         vector<pair<ll, ll>> v;
// //         for(ll i=0; i<n; i++){
// //             v.push_back({a[i], i+1});
// //         }
// //         sort(v.begin(), v.end(), greater<pair<ll, ll>>());
// //         for(ll i=0; i<n; i++){
// //             ll price=v[i].first;
// //             ll day=v[i].second;
// //             ll available=day-watch;
// //             if(available<=0){
// //                 continue;
// //             }
// //             ll today=min(available, 2LL);

// //             earning+=today*price;
// //             watch+=today;
// //         }
// //         cout<<earning<<endl;
        
// //     }
// // }

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {


//     ll T;
//     cin >> T;
//     while (T--) {
//         ll N;
//         cin >> N;
//         vector<ll> A(N);
//         for (ll i = 0; i < N; i++) {
//             cin >> A[i];
//         }

       
//         vector<pair<ll, ll>> days;
//         for (ll i = 0; i < N; i++) {
//             days.push_back({A[i], i + 1});
//         }

       
//         sort(days.begin(), days.end(), greater<>());

//         ll sold = 0;     
//         ll profit = 0;

//         for (auto &d : days) {
//             ll price = d.first;
//             ll day = d.second;

            
//             ll available = day - sold;
//             if (available <= 0) {
//                 continue;
                

            
//             ll sell_today = min(2LL, available);

//             profit += sell_today * price;
//             sold += sell_today;
//         }

//         cout << profit <<endl;
//     }
    
// }

#include <bits/stdc++.h>
using namespace std;

int main() {


    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;

        vector<long long> price(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> price[i];
        }

        vector<vector<long long>> best(n + 1, vector<long long>(n + 1, -1));
        best[0][0] = 0;

        for (int day = 1; day <= n; day++) {
            for (int stock = 0; stock < day; stock++) {
                if (best[day - 1][stock] < 0) continue;

                long long base = best[day - 1][stock];
                int current = stock + 1;

                for (int sell = 0; sell <= 2 && sell <= current; sell++) {
                    int left = current - sell;
                    best[day][left] = max(best[day][left], base + sell * price[day]);
                }
            }
        }

        long long ans = 0;
        for (int i = 0; i <= n; i++) {
            ans = max(ans, best[n][i]);
        }

        cout << ans << endl;
    }
    
}

