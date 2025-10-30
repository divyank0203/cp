#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ull = unsigned long long;
int main(){
    ll t;
    cin>>t; while(t--){
        ll l, r;
        cin>>l>>r;
        if(l==r){
            cout<<l<<endl;
            continue;
        }
        ull msb=0;
        for(ll i=63; i>=0; i--){
            if(((r>>i)&1LL)){
                msb=i+1;
                break;
            }
        }
        ull twos = (msb >= 64 ? ULLONG_MAX : (1ULL << msb));
        ull ones = (msb <= 0 ? 0ULL : (1ULL << (msb - 1)));
        if(((twos-1)>r)&&((twos-1)>=l)){
            if((ones-1)<l){
                cout<<(ones+1)<<endl;
            }
            else{
                cout<<(ones-1)<<endl;
            }
           
        }
        // else if(((twos-1)>r)&&((twos-1)<l)){
        //     cout<<(ones+1)<<endl;
        // }
        else{
            cout<<(twos-1)<<endl;
        }

    }
}

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     ll t;
//     if (!(cin >> t)) return 0;
//     while (t--) {
//         ll l, r;
//         cin >> l >> r;          // l is unused if you only want leftmost bit of r
        
//         if (r == 0) {
//             cout << 0 << '\n';  // define as 0 if r == 0 (no set bits)
//             continue;
//         }
//         // position of MSB (1-indexed)
// ll msb_pos = 0;
// for (ll i = 63; i >= 0; --i) {
//     if ((r >> i) & 1LL) { msb_pos = i + 1; break; }
// }
// cout<<msb_pos<<endl;
//     }
//     return 0;
// }
