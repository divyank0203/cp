#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n; 
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        unordered_map<ll, ll> mp;
        for(ll i=0; i<n ; i++){
            mp[a[i]]++;
        }
        vector<pair<ll, ll>> s ;
        ll siz=mp.size();
        
        for(auto it : mp){
            s.push_back({it.second, it.first});
        }
        sort(s.begin(), s.end());
        ll ans=0;
        ll sum=0;
        for(ll i=0; i<s.size(); i++){
            
            ans=max({ans, (s[i].first)*siz, s[i].first });
            siz--;
        }
        cout<<ans<<endl;
    }
}