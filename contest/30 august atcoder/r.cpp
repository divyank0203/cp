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
    unordered_map<string, ll> mp;
    for(ll i=0; i<n; i++){
        mp[s[i]]=i+1;
    }
    if(x==mp[y]){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}