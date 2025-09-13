

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
        sort(a.begin(), a.end(), greater<>());
        ll ans=0;
        ll odd=0;
        ll j=0;
        bool flag=false;
        for(ll i=0; i<n; i++){
            if(a[i]%2!=0){
                ans+=a[i];
                j=i;
                flag=true;
                break;
            }
        }
        if(flag){
            for(ll i=0; i<n; i++){
                if(a[i]%2==0){
                    ans+=a[i];
                }
            }
        }
        if(j!=n-1){
            for(ll i=j+1; i<n; i++){
                if(a[i]%2!=0){
                    odd++;
                }
            }
        }
        if(odd>1){
            odd=(odd/2);
        for(ll i=j+1; i<n; i++){
            if(a[i]%2!=0){
                ans+=a[i];
                odd--;
            }
            if(odd==0){
                break;
            }
        }
    }
        cout<<ans<<endl;
    }
}