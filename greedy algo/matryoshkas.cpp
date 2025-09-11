#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n; 
        cin>>n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        unordered_map<ll, ll> mp;
        for(ll i=0; i<n; i++){
            mp[a[i]]++;
        }
        ll j=1;
        ll ans=0;
        ll i=0;
        while(i<n){
            j=1;
            while(mp[a[i]]>0){
                if(mp[a[i]+j]>0){
                    mp[a[i]+j]--;
                    // cout<<" f "<<mp[a[i]]<<" j "<<a[i]<<endl;
                    
 
                    

                }
                else{
                   // cout<<" a "<<a[i]<<" value "<<mp[a[i]]<<endl;
                    mp[a[i]]--;
                    ans++;
                    // cout<<" ans "<<ans<<endl;
                    
                }
                j++;

                
            }
            i++;
        }
        cout<<ans<<endl;
    }
}