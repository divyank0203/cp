#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long> ;
int main(){
    ll n, m;
    cin>>n>>m;
    vll a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    if(m>n){
        cout<<0<<endl;
    }
    else{
        ll low = 0, hi = 1e9, ans = 0;
        
        while(low <= hi){
            ll mid = (low + hi) / 2;
            
            if(mid == 0){
                ans = 0;
                low = mid + 1;
                continue;
            }
            
            ll people = 0;
            for(int i = 0; i < n; i++){
                people += a[i] / mid;
                if(people >= m) {
                    break;
                }
            }
            
            if(people >= m){
                ans = mid;
                low = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
    cout<<ans<<endl;
    }
}