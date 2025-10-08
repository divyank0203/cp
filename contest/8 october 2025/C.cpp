// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// using vll = vector<ll>;
// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n;
//         cin>>n;
//         string s;
//         cin>>s;
//         ll i=0; ll j=0;
//         ll ans=0;
//         for(ll k=0; k<s.length(); k++){
//             if(s[k]=='1'){
//                 i=k;
//                 break;
                
//             }
//         }
//         while(j<n&&i<n){

//             if(s[j]=='1'&&(j-i)>1){
//                 ans+=(j-i-1);
//                 i=j;
//                 j++;
//             }
            
//             else{
//                 j++;
//             }
//         }
//         cout<<ans<<endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll ans = 0;
        ll i = -1; 

        for (ll j = 0; j < n; j++) {
            if (s[j] == '1') {
                if (i != -1) {
                    ans += (j - i - 1); 
                }
                i = j; 
            }
        }

        cout << ans << endl;
    }
}

