// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long ;
// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n, k;
//         cin>>n>>k;
//         vector<ll> a(n);
//         for(int i=0; i<n; i++){
//             cin>>a[i];
//         }
//         if(k==n||n==1){
//             cout<<1<<endl;
//             continue;
//         }
//         set<ll> st;
//         for(int i=0; i<n; i++){
//             st.insert(a[i]);
//         }
//         if(st.size()==n){
//             cout<<(n-k)<<endl;
//             continue;
//         }

//     }
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> A(n);
        for (ll i = 0; i < n; i++) {
            cin >> A[i];
        }

        unordered_map<ll,ll> freq;
        for (ll i=0; i<n; i++) {
            freq[A[i]]++;
        }

        ll first = A[0];

        vector<ll> others;
        for (auto &p : freq) {
            if (p.first != first)
                others.push_back(p.second);
        }

        sort(others.begin(), others.end());

        ll remaining = others.size();

        for (ll i=0; i<others.size(); i++) {
            if (k >= others[i]) {
                k -= others[i];
                remaining--;
            } 
            else {
                break;
            }
        }

        
        cout << remaining + 1 << endl;
    }
}
