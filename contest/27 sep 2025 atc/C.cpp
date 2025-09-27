// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int main(){
//     ll n, q;
//     cin>>n>>q;
//     vector<ll> a(n);
//     for(ll i=0; i<n; i++){
//         cin>>a[i];
//     }
//     while(q--){
//         ll type;
//         cin>>type;
//         if(type==1){
//             ll c;
//             cin>>c;
//             while(c--){
//                 reverse(a.begin(), a.end());
//                 reverse(a.begin(), a.end()-1);
//             }
//         }
//         else if(type==2){
//             ll l, r;
//             cin>>l>>r;
//             ll sum = accumulate(a.begin()+l-1, a.begin()+r, ll(0));
//             // for(ll i=l-1; i<r; i++){
//             //     sum+=a[i];
//             // }
//             cout<<sum<<endl;
//         }
//     }
// }
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n, q;
    cin>>n>>q;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    ll shift = 0;
    while(q--){
        ll type;
        cin>>type;
        if(type==1){
            ll c;
            cin>>c;
            shift = (shift + c) % n;
        }
else if (type == 2) {
    ll l, r;
    cin >> l >> r;
    ll sum = 0;
    for (ll i = l - 1; i < r; i++) {
        ll original_idx = (i - shift + n) % n;
        sum += a[original_idx];
    }
    cout << sum << endl;
}
    }
}