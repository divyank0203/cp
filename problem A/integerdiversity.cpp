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
        unordered_map<ll, ll> mp;
        unordered_set<ll> st;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            mp[a[i]]++;
            st.insert(a[i]);
        }
        ll ans=0;
        ans+=(st.size());
        for(auto it: mp){
            if(it.second>1&&it.first!=0&&(mp.find((it.first)*(-1))==mp.end())){
                ans++;

            }
        }
        cout<<ans<<endl;

    }
}