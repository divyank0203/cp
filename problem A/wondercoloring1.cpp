#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll ans=0;
        ll c=0;
        unordered_set<char> st;
        unordered_map<char, ll> mp;
        for(ll i=0; i<s.length(); i++){
            mp[s[i]]++;
            st.insert(s[i]);
        }
        for(auto it: st){
            if(mp[it]>=2){
                ans++;
            }
            else if(mp[it]==1){
                c++;
            }
            if(c==2){
                ans++;
                c=0;
            }
        }
        cout<<ans<<endl;
        
    }
}