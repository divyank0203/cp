// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// using vll = vector<ll>;
// using pll = pair<ll, ll>;
// using vvll = vector<vll>;
// using vpll = vector<pll>;
// #define pb push_back;

// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//        ll n;
//        cin>>n; 
//        vll a(n);
//        for(ll i=0; i<n; i++){
//         cin>>a[i];
//        } 
       
//        sort(a.begin(), a.end());
//        ll ans=0;
       
//        for(ll i=2; i<=LONG_MAX; i++){
//             if(__gcd(i, a[0])==1){
//                 ans=i;
//                 break;
//             }
//        }
//        cout<<ans<<endl;
       
//     }
// }
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll g = a[0];
        for (ll i = 1; i < n; i++) {
            g = __gcd(g, a[i]);
        }

        
        ll ans = -1;
        for (ll x = 2; x <= 100; x++) {
            if (__gcd(x, g) == 1) {
                ans = x;
                break;
            }
        }

        cout << ans << endl;
    }
}
