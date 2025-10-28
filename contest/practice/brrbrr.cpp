#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<vector<ll>> a(n+1, vector<ll>(n+1));
        for(ll i=1; i<=n; i++){
            for(ll j=1; j<=n; j++){
                cin>>a[i][j];
            }
        }
        unordered_map<ll, ll> mp;
        vector<ll> ans((2*n)+1, 0);
        for(ll i=1; i<=n; i++){
            for(ll j=1; j<=n; j++){
                ans[i+j]=a[i][j];
                mp[a[i][j]]++;
            }
        }
        vector<ll> temp;
        for(ll i=1; i<ans.size(); i++){
            if(mp.find(i)==mp.end()){
                temp.push_back(i);
            }
        }
        ll j=0;
        for(ll i=1; i<ans.size(); i++){
            if(ans[i]==0){
                ans[i]=temp[j];
                j++;
            }
        }
        for(ll i=1; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}