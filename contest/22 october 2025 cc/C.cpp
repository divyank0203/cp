#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
int main(){
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        a[i]=(__gcd(n, (i+1)));
    }
    vector<pair<ll, ll>> p(n);
    for(ll i=0; i<n; i++){
        p[i].first=a[i];
        p[i].second=i+1;
    }
    sort(p.begin(), p.end(), [](const auto& a, const auto& b) {
        if (a.first != b.first) {
            return a.first > b.first;
        }
        return a.second < b.second;
    });
    for(ll i=0; i<n; i++){
        cout<<p[i].second<<" ";
    }
    // vector<ll> b(n);
    // for(ll i=1; i<n; i++){
    //     if()
    // }
    cout<<endl;
}
    
}