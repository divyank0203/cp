#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    unordered_map<string, ll> mp;
    // for(ll i=0; i<n;){
    //     string temp="";
    //     ll k2 = k;
    //     while(k2--){
    //         temp+=s[i++];
    //     }
    //     mp[temp]++;
    //     i-=(k-1);
    // }
        for (ll i = 0; i <= n - k; i++) {
        string temp = s.substr(i, k);
        mp[temp]++;
    }
    ll ans=0;
    vector<string> res;
    for(auto x:mp){
        ans=max(ans, x.second);
    }
    ll count = 0;
    for(auto x:mp){
        if(x.second==ans){
            res.push_back(x.first);
            count=max(count, (ll)x.second);
        }
    }
    sort(res.begin(), res.end());
    cout<<count<<endl;
    for(auto x:res){
        cout<<x<<" ";
    }
    
}