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
//         vector<ll> b(n);
//         for(ll i=0; i<n; i++){
//             cin>>a[i];
//         }
//         for(ll i=0; i<n; i++){
//             cin>>b[i];
//         }
//         for(ll i=0; i<n-1; i++){
//             if(a[i] == b[i]){
//                 continue;
//         }
//         else if((a[i]^a[i+1])==b[i]){
//             a[i]=(a[i]^a[i+1]);
//         }
//         else {
//             break;
//         }
//     }
//     bool flag = true;
//         for(ll i=0; i<n; i++){
//             if(a[i]==b[i]){
//                 continue;
//             }
//             else{
//                 flag=false;
//                 break;
//             }
//         }
//         if(flag){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }

// }
// }

// #include <iostream>
// #include <vector>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        
        vector<ll> a(n);
        
        if (n == 2) {
            
            a[0] = -1;
            a[1] = 2;
        } else {

            a[0] = -1;            
            ll pos = n; 
            
            for (ll i = 1; i < n; i++) {
                if (i % 2 == 1) {
               
                    a[i] = pos;
                    pos--;
                } else {
                   
                    a[i] = -1;
                }
            }
        }
        
        
        for (ll i = 0; i < n; i++) {
            cout << a[i];
            if (i < n - 1) cout << " ";
        }
        cout <<endl;
    }
    
    
}