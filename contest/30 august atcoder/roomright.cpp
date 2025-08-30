#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;
    cin>>n;
    vector<string> s(n);
    for(ll i=0; i<n; i++){
        cin>>s[i];
    
    }
    ll x;
    string y;
    cin>>x>>y;
    multimap<string, ll> mp;
    
    for(ll i=0; i<n; i++){
        mp.insert({s[i], i+1});
        
    }
    auto range = mp.equal_range(y);
    bool found = false;
    for (auto it = range.first; it != range.second; ++it) {
        if (it->second == x) {
            found = true;
            break;
        }
    }
    
    if (found) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}