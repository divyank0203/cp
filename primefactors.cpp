#include<bits/stdc++.h>
using namespace std;
using ll = long long;
unordered_set<ll> factor_set(ll n) {
    unordered_set<ll> st;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            st.insert(i);
            while (n % i == 0){
                n /= i;
            }
        }
    }
    if (n > 1) {
        st.insert(n);
    }
    return st;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        vector<ll> b(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        for(ll i=0; i<n; i++){
            cin>>b[i];
        }
        unordered_map<ll, ll> primes;
        ll ans=0;
        bool zero=false;
        for(ll i=0; i<n; i++){
            auto s = factor_set(a[i]);
            for(auto p:s){
                primes[p]++;
                if(primes[p]>=2){
                    zero=true;
                    break;
                }
            }
            if(zero){
                break;
            }
        }
        if(zero){
            cout<<0<<endl;
            continue;
        }
        bool one=false;
        for(ll i=0; i<n; i++){
            auto s = factor_set(a[i]+1);
            for(auto p:s){
                if(primes.find(p)!=primes.end()&&primes[p]>0){
                    one=true;
                    break;
                }
            }
            if(one){
                break;
            }
        }
        if(one){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
}