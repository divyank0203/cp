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
//         unordered_set<ll> st(a.begin(), a.end());
//         vector<ll> common;
//         for(ll i=0; i<n; i++){
//             if(st.count(b[i])){
//                 common.push_back(b[i]);
//             }
//         }
//         sort(common.begin(), common.end(), greater<ll>());
//         ll el=common[0];
//         ll ina=0, inb=0;
//         for(ll i=0; i<n; i++){
//             if(a[i]==el){
//                 ina=i;
//             }
//             if(b[i]==el){
//                 inb=i;
//             }
//         }
        
//         ll suma=LLONG_MIN;
//         ll sumb=LLONG_MIN;
//         ll sa=0;
//         ll sb=0;
//         for(ll i=ina; i<n; i++){
//             sa+=a[i];
//             suma=max(suma, sa);

//         }
//         for(ll i=inb; i<n; i++){
//             sb+=b[i];
//             sumb=max(sumb, sb);
//         }
//         if(ina!=0){
//             for(ll i=ina-1; i>=0; i--){
//                 sa+=a[i];
//                 suma=max(suma, sa);
//             }
//         }
//         if(inb!=0){
//             for(ll i=inb-1; i>=0; i--){
//                 sb+=b[i];
//                 sumb=max(sumb, sb);
//             }
//         }
//         cout<<suma+sumb<<endl;
        
//     }
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ll T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        vector<ll> A(N), B(N);
        for(int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for(int i = 0; i < N; i++) {
            cin >> B[i];
        }

        vector<ll> prea(N), preb(N), sa(N), sb(N), tha(N), thb(N);

    
        prea[0] = A[0];
        preb[0] = B[0];

        for(int i = 1; i < N; i++){
            prea[i] = max(A[i], prea[i-1] + A[i]);
            preb[i] = max(B[i], preb[i-1] + B[i]);
        }

      
        sa[N-1] = A[N-1];
        sb[N-1] = B[N-1];

        for(int i = N-2; i >= 0; i--){
            sa[i] = max(A[i], sa[i+1] + A[i]);
            sb[i] = max(B[i], sb[i+1] + B[i]);
        }

        
        for(int i = 0; i < N; i++){
            tha[i] = prea[i] + sa[i] - A[i];
            thb[i] = preb[i] + sb[i] - B[i];
        }

      
        ll ans = LLONG_MIN;
        for(int i = 0; i < N; i++){
            ans = max(ans, tha[i] + thb[i]);
        }

        cout << ans << endl;
    }

    
}
