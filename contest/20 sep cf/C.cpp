#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        string s;
        cin>>n;
        cin>>s;
        unordered_map<char, ll> mp;
        for(ll i=0; i<s.length(); i++){
            mp[s[i]]++;
        }
        if(mp['0']>mp['1']){
            cout<<"YES"<<endl;
            continue;
            }
        if(mp['0']==1||mp['0']==2){
            if()
        }
        
    }
}