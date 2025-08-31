// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// bool isprime(ll a){
//     for(ll i=2; i*i<=a; i++){
//         if(a%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n, m;
//         cin>>n>>m;
//         ll in=1;
//         vector<vector<ll>> v(n, vector<ll>(m));
//         if(!isprime(n)){
            
//             for(ll i=0; i<m; i++){
//                 for(ll j=0; j<n; j++){
//                     v[j][i]=in;
//                     in++;
//                 }
//             }

//         }
//         else if(!isprime(m)){
            
//             for(ll i=0; i<n; i++){
//                 for(ll j=0; j<m; j++){
//                     v[i][j]=in;
//                     in++;
//                 }
//             }
 
//         }
//         // else if(isprime(n)&&isprime(m)){
//         //     for(ll i=0; i<m; i++){
//         //         for(ll j=0; j<n; j++){
//         //             v[j][i]=in;
//         //             in++;
//         //         }
//         //     }
//         // }
//         else if(isprime(n)&&isprime(m)){
//             vector<ll> rem(max(n, m));

//             ll k=0;
            
//             if(n<=m){
                
                
//                 for(ll i=0; i<m; i++){
//                     if(i>0) in++;
//                     if(i==m-1){
//                         for(ll j=0; j<n; j++){
//                             v[j][i]=rem[j];
//                         }
//                     }
//                     else{
//                     for(ll j=0; j<n; j++){
//                         v[j][i]=in;
//                         in++;
//                         if(j==n-1){
//                             rem[k]=in;
//                             k++;
//                         }
//                     }
//                 }
//                 }
//             }
//             if(m<n){
 
//                 for(ll i=0; i<n; i++){
//                     if(i>0) in++;
//                     if(i==n-1){
//                         for(ll j=0; j<m; j++){
//                             v[i][j]=rem[j];
//                         }
//                     }
//                     else{
//                     for(ll j=0; j<m; j++){
//                         v[i][j]=in;
//                         in++;
//                         if(j==m-1){
//                             rem[k]=in;
//                             k++;
//                         }
//                     }
//                 }
//                 }
//             }

//             }
//                     for (ll i = 0; i < n; i++) {
//             for (ll j = 0; j < m; j++) {
//                 cout << v[i][j] << " ";
//             }
//             cout << endl;
//         }
//         cout << endl;
            

//         }
//     }
#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define pb push_back
#define ln '\n'
#define int long long

template <class _T>
bool chmin(_T &x, const _T &y){
    bool flag = false;
    if ( x > y ){
        x = y; flag |= true;
    }
    return flag;
}

template <class _T>
bool chmax(_T &x, const _T &y){
    bool flag = false;
    if ( x < y ){
        x = y; flag |= true;
    }
    return flag;
}

void solve(){
    int n, m; cin >> n >> m;
    auto prime = [&](int x){
        if ( x == 1 ) return false;
        for ( int i = 2; i * i <= x; i++ ){
            if ( x % i == 0 ){
                return false;
            }
        }
        return true;
    };
    if ( !prime(m) ){
        int cnt = 0;
        for ( int i = 1; i <= n; i++ ){
            for ( int j = 1; j <= m; j++ ){
                cout << ++cnt << ' ';
            }
            cout << ln;
        }
        cout << ln;
        return;
    }
    if ( !prime(n) ){
        for ( int i = 1; i <= n; i++ ){
            for ( int j = 1; j <= m; j++ ){
                cout << (j - 1) * n + i << ' ';
            }
            cout << ln;
        }
        cout << ln;
        return;
    }
    vector <vector<int>> p(n);
    for ( int i = 1; i <= n; i++ ){
        for ( int j = 1; j <= m; j++ ){
            p[i - 1].pb((i - 1) * m + j);
        }
    }
    for ( int i = n; i > 0; i -= 2 ){
        for ( auto j: p[i - 1] ){
            cout << j << ' ';
        }
        cout << ln;
    }
    for ( int i = n - 1; i > 0; i -= 2 ){
        for ( auto j: p[i - 1] ){
            cout << j << ' ';
        }
        cout << ln;
    }
    cout << ln;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while ( T-- ){
        solve();
    }

    cout << '\n';
}
