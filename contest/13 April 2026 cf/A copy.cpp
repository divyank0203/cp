#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
         ll n, m;
        cin >> n >> m;
        
        vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        
        if(n < m){
            
            cout << "YES" << endl;
            continue;
        }
        
        
        unordered_set<ll> bad;
        bad.reserve(n * 2);
        for(ll i = 1; i <= n; i++){
            ll bi = (a[i-1] + i) % m;
            ll w = (m - bi) % m;
            bad.insert(w);
            if((ll)bad.size() == m) break;
        }
        
        if((ll)bad.size() < m){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}