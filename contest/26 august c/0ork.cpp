// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n, k;
//         cin>>n>>k;
//         vector<ll> a(n);
//         for(ll i=0; i<n; i++){
//             cin>>a[i];
//         }
//         if(k%2!=0){
//             for(ll i=0; i<n; i++){
//                 if(a[i]%2==0){
//                     continue;
//                 }
//                 else{
//                     a[i]+=k;
//                 }
//             }
//             for(ll i=0; i<n; i++){
//                 cout<<a[i]<<" ";
//             }
//             cout<<endl;
//         }
//         else{
//             ll m = *max_element(a.begin(), a.end());
//             for(ll i=0; i<n; i++){
//                 if(__gcd(a[i], m)>1){
//                     continue;
//                 }
                
//                     ll k2=k;
//                     while(k2--){
//                         a[i]+=k;
//                         if(__gcd(a[i], m)!=1){
//                             break;
//                         }

//                     }

                
//             }
//             for(ll i=0; i<n; i++){
//                 cout<<a[i]<<" ";
//             }
//             cout<<endl;
//         }

//     }
// }
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        
        if(k % 2 == 1){
            // Your brilliant logic
            for(ll i = 0; i < n; i++){
                if(a[i] % 2 == 1){
                    a[i] += k;
                }
            }
        }
        else{
            // Make all numbers congruent modulo 2
            // Find target remainder (0 or 1)
            ll target = a[0] % 2;
            for(ll i = 0; i < n; i++){
                if(a[i] % 2 != target){
                    a[i] += k;
                }
            }
        }
        
        for(ll i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

