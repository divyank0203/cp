#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        vector<ll> p(n);
        for(ll i=0; i<n; i++){
            cin>>p[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }

        ll low=p[0];
        ll high=p[0];
        // ll i=0;
        ll win=0;
        for(ll i=1; i<n; i++){
            low=min(low, p[i]);
            high=max(high, p[i]);
            if(high-low>k){
                win++;
                low=high=p[i];
            }
        }

        cout<<win<<endl;
        
    }
}