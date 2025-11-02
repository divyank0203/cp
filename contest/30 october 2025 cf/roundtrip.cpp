// // #include<bits/stdc++.h>
// // using namespace std;
// // using ll = long long;
// // int main(){
// //     ll t;
// //     cin>>t;
// //     while(t--){
// //         ll r,x,d,n;
// //         cin>>r>>x>>d>>n;
// //         string s;
// //         cin>>s;
// //         if(r<x){
// //             ll rate=0;
// //             ll r2=r;
// //             ll x2=x;
// //             for(ll i=0; i<n; i++){
// //                 if(s[i]=='1'){
// //                     rate++;
// //                 }
// //                 else if((r2-1>=0||r2+1<x2)&&s[i]=='2'){
// //                     rate++;
// //                 }
// //                 else{
// //                     break;
// //                 }
// //             }
// //             cout<<rate<<endl;
// //         }
// //         else{
// //             ll rate=0;
// //             ll r2=r;
// //             ll x2=x;
// //             ll one=0;
// //             ll dif=(r2-(x2+1));
// //             for(ll i=0; i<n; i++){
// //                 if(s[i]=='1'){
// //                     one++;
// //                     rate++;
                
// //                 }
// //                 else{
// //                     if(r2<x2){
// //                         rate++;
// //                     }
// //                     else if(one>0&&(one*d)>=dif){
// //                         rate++;
// //                         one=0;
// //                         r2-=dif;

// //                     }
// //                     dif=(r2-(x2+1));
// //                 }
            
// //             }
// //             cout<<rate<<endl;
// //         }
// //     }
// // }

// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main(){
//     ll t;
//     cin >> t;
//     while(t--){
//         ll r, x, d, n;
//         cin >> r >> x >> d >> n;
//         string s;
//         cin >> s;

//         if(r < x){
//             ll rate = 0;
//             ll r2 = r, x2 = x;
//             for(ll i=0; i<n; i++){
//                 if(s[i] == '1'){
//                     rate++;
//                 }
//                 else if((r2 - 1 >= 0 || r2 + 1 < x2) && s[i] == '2'){
//                     rate++;
//                 }
//                 else break;
//             }
//             cout << rate << endl;
//         }
//         else{
//             ll rate = 0;
//             ll r2 = r, x2 = x;
//             ll one = 0;

//             for(ll i=0; i<n; i++){
//                 if(s[i] == '1'){
//                     one++;
//                     rate++;
//                 }
//                 else if(s[i] == '2'){
//                     ll dif = max(0LL, r2 - (x2 + 1));  // recompute each time

//                     if(r2 <= x2){
//                         rate++;
//                     }
//                     else if(one > 0 && (one * d) >= dif){
//                         rate++;
//                         one = 0;
//                         r2 -= dif;  // reduce radius accordingly
//                     }
//                     else break;
//                 }
//             }
//             cout << rate << endl;
//         }
//     }
// }



// // #include <bits/stdc++.h>
// // using namespace std;
// // using ll = long long;

// // int main() {

// //     int t;
// //     cin >> t;
// //     while (t--) {
// //         ll R0, X, D, n;
// //         cin >> R0 >> X >> D >> n;
// //         string s;
// //         cin >> s;

// //         ll rating = R0;
// //         int rated = 0;

// //         for (char c : s) {
// //             if (c == '1') {
              
// //                 rated++;

               
// //                 if (rating + D < X) {
// //                     rating += D; 
// //                 } 
// //                 else if (rating >= X && rating - D < X) {
// //                     rating = X - 1; 
// //                 } 
// //                 else if (rating >= X) {
// //                     rating -= D; 
// //                 } 
// //                 else {
                    
// //                     rating = min(X - 1, rating + D);
// //                 }
// //             } 
// //             else { 
// //                 if (rating < X) {
// //                     rated++;
// //                     rating = min(X - 1, rating + D); 
// //                 } 
// //                 else {
// //                     break; 
// //                 }
// //             }
// //         }

// //         cout << rated << "\n";
// //     }
    
// // }

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll r, x, d, n;
        cin>>r>>x>>d>>n;
        string s;
        cin>>s;
        // ll ans=0;
        ll count=0;
        for(ll i=0; i<n; i++){
            if(s[i]=='1'){
                count++;
                r=max(r-d, 0LL);
            }
            else{
                if(r<x){
                    count++;
                    r=max(r-d, 0LL);
                }
            }
        }
        cout<<count<<endl;
    }
}
