#include<bits/stdc++.h>
using ll = long long;
using namespace std;
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
        ll ans=0;
        unordered_map<ll, ll> mp;
        for(ll i=0; i<n; i++){
            if(mp.find(a[i]) == mp.end()){
                mp[a[i]]++;
                
            }
        }
        if(mp.find(0)!=mp.end()&&mp.size()==1){
            cout<<1<<endl;
        }
        else if(mp[0]==0){
            cout<<0<<endl;
        }
        else{
            bool flag =false;
            for(ll i=1; i<n; i++){
                if(a[i]==a[i-1]){
                    continue;
                }
                if(a[i]>a[i-1]+1){
                    ans=a[i-1]+1;
                    flag=true;
                    break;
                }
            }
            if(flag){
                cout<<ans<<endl;
            }
            else{
                cout<<a[n-1]+1<<endl;
            }
        }
        
    }

}