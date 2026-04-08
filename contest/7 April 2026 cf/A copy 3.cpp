#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    
    ll t;
    cin>>t;
    
    while(t--){
        
        
        ll n;
        cin>>n;
        
        vector<array<ll,3>> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i][0]>>a[i][1]>>a[i][2];
            sort(a[i].begin(),a[i].end());
        }
        
        vector<pair<ll,ll>> pr;
        pr.reserve(3*n);
        for(ll i=0;i<n;i++){
            for(ll j=0;j<3;j++){
                pr.push_back({a[i][j],i});
            }

        }
        sort(pr.begin(),pr.end());
        
        vector<ll> ptr(n,0);
        multiset<ll> ms;
        for(ll i=0;i<n;i++) {
            ms.insert(a[i][0]);
        }
        
        ll w=0;
        ll ans=LLONG_MAX;
        ll u=0;
        ll sz=(ll)pr.size();
        
        for(ll i=0; i<sz; i++){
            ll lo=pr[i].first;
            
            while(u<sz && pr[u].first<lo){
                ll r=pr[u].second;
                
                if(a[r][ptr[r]]==pr[u].first){
                    ms.erase(ms.find(a[r][ptr[r]]));
                    ptr[r]++;
                    if(ptr[r]<3) {
                        ms.insert(a[r][ptr[r]]);
                    }
                    else {
                        w++;
                    }
                }
                u++;
            }
            
            if(w==0){
                ans=min(ans,*ms.rbegin()-lo);
            }
        }
        
        cout<<ans<<endl;
    }
    
    
}