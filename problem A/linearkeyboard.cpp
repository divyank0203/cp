#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string key;
        string word;
        cin>>key;
        cin>>word;
        unordered_map<char, ll> mp;
        for(ll i=0; i<key.length(); i++){
            mp[key[i]] = i+1;
        }
        ll ans=0;
        for(ll i=1; i<word.length(); i++){
            ans+=abs(mp[word[i]]-mp[word[i-1]]);
        }
        cout<<ans<<endl;
    }
}