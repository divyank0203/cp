// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// ll main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n, k;
//         cin>>n>>k;
//         string s;
//         cin>>s;
//         set<ll> st;
//         unordered_map<char, ll> mp;
//         for(ll i=0; i<n; i++){
//             mp[s[i]]++;
//         }
//         if(mp['0']==0||mp['1']==0){
//             cout<<"No"<<endl;
//             continue;
//         }
//         bool flag=true;
//         bool c=false;
//         for(ll i=0; i<=n-k; i++){
//             if(c==false){
//                 if(st.count(i)){
//                     mp['0']--;
//                     st.insert(i+k-1);
//                     // if(mp['0']==0){
//                     //     flag=false;
//                     //     break;
//                     // }
//                 }
//                 else{
//                     st.insert(i);
//                     mp['1']--;
//                     st.insert(i+k-1);
//                     c=true;
//                     mp['0']--;
//                     // if(mp['1']==0){
//                     //     flag=false;
//                     //     break;
//                     // }
//                 }
//             }
//             else{
//                 if(st.count(i)){
//                     mp['1']--;
//                     st.insert(i+k-1);
//                     // if(mp['1']==0){
//                     //     flag=false;
//                     //     break;
//                     // }
//                 }
//                 else{
//                     st.insert(i);
//                     mp['0']--;
//                     st.insert(i+k-1);
//                     c=false;
//                     mp['1']--;
//                     // if(mp['0']==0){
//                     //     flag=false;
//                     //     break;
//                     // }
//                 }
//             }
//             if(mp['0']==0||mp['1']==0){
//                 flag=false;
//                 break;
//             }
//         }
//         if(flag){
//             cout<<"Yes"<<endl;
//         }
//         else{
//             cout<<"No"<<endl;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll T;
    cin >> T;
    while (T--) {
        ll N, K;
        cin >> N >> K;
        string S;
        cin >> S;

        ll cnt1 = 0;
        for(ll i=0; i<N; i++){
            if(S[i]=='1'){
                cnt1++;
            }
        }
        ll cnt0 = N - cnt1;
        ll D = cnt1 - cnt0;  

        ll oddChains = 0;

        
        for (ll start = 0; start < K; start++) {
            ll len = 0;
            for (ll i = start; i < N; i += K) {
                len++;
            }
            if (len % 2 == 1) {
                oddChains++;
            }
        }

        bool ok=false;
        if((abs(D) <= oddChains) && ((D & 1) == (oddChains & 1))){
            ok=true;
        }
        


        if(ok){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }


}
