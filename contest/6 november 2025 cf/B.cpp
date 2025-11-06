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
//         ll one=0;
//         vector<ll> odd;
//         ll even=0;

//         for(ll i=0; i<n; i++){
//             cin>>a[i];
//             if(a[i]==1){
//                 one++;
//             }
//             if(a[i]%2!=0){
//                 odd.push_back(a[i]);
//             }
//             else if(a[i]%2==0){
//                 even++;
//             }
//         }

//         // ll mx = -1;
//         // if(!odd.empty()) {
//         //     mx = *max_element(odd.begin(), odd.end());
//         // }

//         bool found=false;

//         if(even>=2){
//             found=true;
//             ll count=0;
//             for(ll i=0; i<n; i++){
//                 if(a[i]%2==0 && count<2){
//                     cout<<a[i]<<" ";
//                     count++;
//                 }
//             }
//             cout<<endl;
//         }
//         else if(one>=1){
//             found=true;
//             cout<<1<<" "<<a[1]<<endl;
//         }
//         else{
//         ll mx = a.back(); 

//         for(ll i=0;i<odd.size();i++){
//             for(ll k=1; k*odd[i] <= mx; k+=2){ 
//                 ll L = k * odd[i];
//                 ll R = (k+1) * odd[i];
//                 auto it = lower_bound(a.begin(), a.end(), L);
//                 if(it == a.end()) break;
//                 ll y = *it;
//                 if(y < R && y != odd[i]){
//                     cout<<odd[i]<<" "<<y<<endl;
//                     found=true;
//                     break;
//                 }
//             }
//             if(found) break;

//         }


//     }
//             if(!found){
//             cout<<-1<<endl;
//         }
// }
// }

#include <bits/stdc++.h>
using namespace std;

bool find_pair(const vector<long long>& b, long long& x, long long& y) {
    int m = b.size();
    if (m < 2) return false;
    for (int i = 0; i < m - 1; i++) {
        long long modd = b[i + 1] % b[i];
        if (modd % 2 == 0) {
            x = b[i];
            y = b[i + 1];
            return true;
        }
    }
    // brute force all pairs
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            long long modd = b[j] % b[i];
            if (modd % 2 == 0) {
                x = b[i];
                y = b[j];
                return true;
            }
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int test = 0; test < t; test++) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long> odds, evens;
        for (auto num : a) {
            if (num % 2 == 0) {
                evens.push_back(num);
            } else {
                odds.push_back(num);
            }
        }
        if (evens.size() >= 2) {
            cout << evens[0] << " " << evens[1] << "\n";
            continue;
        }
        if (evens.size() == 0) {
            long long xx, yy;
            if (find_pair(odds, xx, yy)) {
                cout << xx << " " << yy << "\n";
            } else {
                cout << "-1\n";
            }
            continue;
        }
        // exactly one even
        long long e = evens[0];
        auto it = lower_bound(odds.begin(), odds.end(), e);
        int left_cnt = it - odds.begin();
        bool found = false;
        for (int k = 0; k < left_cnt; k++) {
            long long modd = e % odds[k];
            if (modd % 2 == 0) {
                cout << odds[k] << " " << e << "\n";
                found = true;
                break;
            }
        }
        if (!found) {
            long long xx, yy;
            if (find_pair(odds, xx, yy)) {
                cout << xx << " " << yy << "\n";
            } else {
                cout << "-1\n";
            }
        }
    }
    return 0;
}
