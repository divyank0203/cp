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
        bool flag = false;
        ll lun = 0;
        for(ll i=0; i<n; i++){
            if(!flag&&a[i]%2!=0){
                lun++;
                flag = true;
            }
            else if(flag&&a[i]%2==0){
                lun++;
                flag = false;
            }
        }
        ll lun2=0;
        flag = false;
        for(ll i=0; i<n; i++){
            if(!flag&&a[i]%2==0){
                lun2++;
                flag = true;
            }
            else if(flag&&a[i]%2!=0){
                lun2++;
                flag = false;
            }
        }
        ll ans = max(lun, lun2);
        cout<<ans<<endl;

    }
}