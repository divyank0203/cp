#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string a;
        cin>>a;
        ll m;
        cin>>m;
        string b;
        cin>>b;
        string c;
        cin>>c;
        vector<pair<char, char>> mp;
        for(ll i=0; i<m; i++){
            mp.push_back({b[i], c[i]});
        }
        string ans = a;
        for(ll i=0; i<m; i++){
            if(mp[i].second=='D'){
                ans.push_back(mp[i].first);
            }
            else{
                ans.insert(ans.begin(), mp[i].first);
            }
        }
        cout<<ans<<endl;
    }
}