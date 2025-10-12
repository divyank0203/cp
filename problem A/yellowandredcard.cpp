#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
    ll n, q;
    cin>>n>>q;
    vector<pair<ll, ll>> a(q);
    for(ll i=0; i<q; i++){
        cin>>a[i].first>>a[i].second;
    }
    unordered_map<ll, ll> mp;
    vector<ll> ans(n+1, -1);
    for(ll i=0; i<q; i++){
        if(a[i].first==1&&ans[a[i].second]==-1){
            mp[a[i].second]++;
        }
        else if(a[i].first==2&&ans[a[i].second]==-1){
            mp[a[i].second]+=2;
        }
        else{
            if(mp[a[i].second]>=2){
                cout<<"Yes"<<endl;
                ans[a[i].second]=1;
            }
            else{
                cout<<"No"<<endl;
            
            }
        }
    }
}