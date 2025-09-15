// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n;
//         cin>>n;
//         vector<ll> a(n);
//         for(ll i=0; i<n; i++){
//             cin>>a[i];
//         }
//         vector<ll> np;
//         for(ll i=1; i<=n; i++){
//             if(find(a.begin(), a.end(), i)==a.end()){
//                 np.push_back(i);
//             }
//         }
//         sort(np.begin(), np.end(), greater<int>());
//         ll j=0;
//         for(ll i=0; i<n; i++){
//             if(a[i]==0){
//                 a[i]=np[j];
//                 j++;
//             }
//         }
//         ll ans=0;
//         ll k=0;
//         for(ll i=0; i<n; i++){
//             ans=0;
//             if(i+1!=a[i]){
//                 ans++;
//             }

//         }
        

//     }
// }
 #include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    // testcases input
    ll t;
    cin>>t;
    while (t--) {
        ll n; 
        // array size input
        cin >> n;
        vector<ll> p(n+1);
        vector<ll> present(n+1, 0);
        vector<ll> zeros;
        // array elements input
        for (ll i = 1; i <= n; ++i) {
            cin >> p[i];
            if (p[i] == 0) zeros.push_back(i);
            else present[p[i]] = 1;
        }
        vector<ll> missing;
        for (ll x = 1; x <= n; ++x) if (!present[x]){
             missing.push_back(x);
        }

        ll k = (ll)zeros.size();
        bool forced_single_zero = false;
        if (k == 1 && missing.size() == 1 && missing[0] == zeros[0]) forced_single_zero = true;

        vector<char> forced_correct(n+1, false);
        for (ll i = 1; i <= n; ++i) {
            if (p[i] != 0 && p[i] == i) forced_correct[i] = true;
        }
        if (forced_single_zero) {
            forced_correct[zeros[0]] = true;
        }

        ll L = -1, R = -1;
        for (ll i = 1; i <= n; ++i) {
            if (!forced_correct[i]) {
                 L = i; 
                 break;
                }
        }
        if (L == -1) {
            cout << 0 <<endl;
            continue;
        }
        for (ll i = n; i >= 1; --i) {
            if (!forced_correct[i]) {
                 R = i; 
                 break;
                }
        }
        cout << (R - L + 1) <<endl;
    }
    
}


