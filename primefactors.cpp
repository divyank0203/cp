#include<bits/stdc++.h>
using namespace std;
using ll = long long;
// Returns the set of distinct prime factors of n
unordered_set<ll> factor_set(ll n) {
    unordered_set<ll> st;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            st.insert(i);
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1) st.insert(n);
    return st;
}

int main(){
    
}