#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end(), greater<>());
        ll ans=0;
    

        for(ll i=0; i<n; i++){
            if(m-i==0) break;
            ans+=(a[i]*(m-i));
           

        }
        cout<<ans<<endl;
    }
}
// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n, m;
//         cin>>n>>m;
//         vector<ll> a(n);
//         for(ll i=0; i<n; i++){
//             cin>>a[i];
//         }
//         sort(a.begin(), a.end());
//         ll ans=0;
//         ll j=0;
//         for(ll i=n-1; i>=0; i--){
//             ans+=a[i]*(m-j);
//             j++;
//         }
//         cout<<ans<<endl;
//     }
// }