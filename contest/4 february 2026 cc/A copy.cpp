#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll ans=0;
        for(ll i=0; i<n; i++){
            if(s[i]>='A'&&s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }
        unordered_map<char, ll> mp;
        for(ll i=0; i<n; i++){
            mp[s[i]]++;
        }
        char in;
        for(auto it: mp){
            if(it.second>ans){
                ans=it.second;
                in=it.first;
            }
            
        }
        ll count=0;
        for(auto it: mp){
            if(it.first!=in){
                count=max(count, it.second);
            }
        }
        ans+=count;
        cout<<ans<<endl;
    }
}