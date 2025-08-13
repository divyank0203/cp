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
        for(ll i = 0; i < n; i++) {
            cin>>a[i];
        }
        ll m =0;
        ll v=1;
        sort(a.begin(), a.end());
        unordered_map<ll, ll> mp;
        for(ll i = 0; i < n; i++){
            
                mp[a[i]]++;
                if(mp[a[i]]>=m){
                    v=a[i];
                }
                m = max(m, mp[a[i]]);
            
        }
        if(v == 1||m==mp[1]){
            cout<<(a.size()-m)<<endl;
        }
        // else if(v==mp[1]){
        //     cout<<(a.size()-m)<<endl;
        // }
        else{
            cout<<a.size()-m+1<<endl;
        }
        // cout<<"value"<<v<<endl;
        // cout<<"freq"<<m<<endl;
        // cout<<mp[1]<<endl;
        // ll count = 1; 
        // ll maxCount = 0;
        // sort(a.begin(), a.end());
        // ll i=1;
        // while(i<n){
        //     while(a[i] == a[i-1]){
        //         count++;
        //         i++;
        //     }
        //     maxCount  = max(maxCount, count);
        //     count = 1;
        //     i++;
        // }
        
    }
}