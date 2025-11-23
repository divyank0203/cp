#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        unordered_map<ll,ll> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        ll ans=0;
        for(auto x: mp){
            if(x.first!=x.second){
                if(x.second>x.first){
                    ans+=x.second - x.first;
                }
                else{
                    ans+=x.second;
                }
            }
        }
        cout<<ans<<endl;
    }
}