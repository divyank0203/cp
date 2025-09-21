#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        vector<vector<ll>> a(n, vector<ll>(m));
        unordered_map<ll, ll> mp;
        for(ll i=0; i<n; i++){
         ll re;
         cin>>re;
         a[i].resize(re);
            for(ll j=0; j<re; j++){
                cin>>a[i][j];
                mp[a[i][j]]++;
            }
        }
        ll q=0;
        for(ll i=1; i<=m; i++){
            if(mp[i]==0){
                q=1;
                // cout<<"NO"<<endl;
                break;
            }
        }
        // cout<<" size "<<mp.size()<<endl;
        if(mp.size()<m||q==1){
            cout<<"NO"<<endl;
            continue;
        }
        
        
        ll ns = 0;
        for (ll i=0; i<n; i++) {
            bool n = false;
            for (ll x : a[i]) {
                if (mp[x]==1) {
                    n=true;
                    break;
                }
            }
            if (n==false) {
                ns++;
            }
        }
        if (ns>=2) {
            cout <<"YES"<<endl;
        } else {
            cout <<"NO"<<endl;
        }
            
        
        

    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<vector<int>> sets(n);
//         vector<int> cnt(m+1, 0);
//         for (int i = 0; i < n; i++) {
//             int l;
//             cin >> l;
//             sets[i].resize(l);
//             for (int j = 0; j < l; j++) {
//                 cin >> sets[i][j];
//                 cnt[sets[i][j]]++;
//             }
//         }
//         bool covered = true;
//         for (int i = 1; i <= m; i++) {
//             if (cnt[i] == 0) {
//                 covered = false;
//                 break;
//             }
//         }
//         if (!covered) {
//             cout << "NO\n";
//             continue;
//         }
//         int ns = 0;
//         for (int i = 0; i < n; i++) {
//             bool n = false;
//             for (int x : sets[i]) {
//                 if (cnt[x] == 1) {
//                     n = true;
//                     break;
//                 }
//             }
//             if (!n) {
//                 ns++;
//             }
//         }
//         if (ns >= 2) {
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
//         }
//     }
//     return 0;
// }

