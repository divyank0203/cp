#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n; 
        cin>>n;
        vector<ll> a(n+1);
        vector<ll> pre(n+1, 0); 
        for(ll i=1; i<=n; i++){
            cin>>a[i];
            
        }
        for(ll i=1; i<=n; i++){
            pre[i]=pre[i-1]+a[i];
        }
        bool found =false;
        int L = 0, R = 0;

        for (int l = 1; l < n && !found; l++) {
            for (int r = l + 1; r < n && !found; r++) {
                int s1 = pre[l] % 3;
                int s2 = (pre[r] - pre[l]) % 3;
                int s3 = (pre[n] - pre[r]) % 3;

                if ((s1 == s2 && s2 == s3) || (s1 != s2 && s2 != s3 && s1 != s3)) {
                    found = true;
                    L = l;
                    R = r;
                }
            }
        }
        if(found){
            cout<<L<<" "<<R<<endl;

        }
        else{
            cout<<0<<" "<<0<<endl;
        }


    }
}
// 1:#include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n + 1);
//         for (int i = 1; i <= n; i++) cin >> a[i];

//         vector<int> pref(n + 1, 0);
//         for (int i = 1; i <= n; i++) pref[i] = pref[i - 1] + a[i];

//         bool found = false;
//         int L = 0, R = 0;

//         for (int l = 1; l < n && !found; l++) {
//             for (int r = l + 1; r < n && !found; r++) {
//                 int s1 = pref[l] % 3;
//                 int s2 = (pref[r] - pref[l]) % 3;
//                 int s3 = (pref[n] - pref[r]) % 3;

//                 if ((s1 == s2 && s2 == s3) || (s1 != s2 && s2 != s3 && s1 != s3)) {
//                     found = true;
//                     L = l;
//                     R = r;
//                 }
//             }
//         }

//         if (found) cout << L << " " << R << "\n";
//         else cout << "0 0\n";
//     }

//     return 0;
// }

