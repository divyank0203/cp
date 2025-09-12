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
        bool flag=false;
        ll odd=0;
        ll even=0;
        ll ocount=0;
        ll ecount=0;
        ll ans=0;
        for(ll i=0; i<n; i++){
            if(a[i]%2==0){
                ocount=0;
                ecount++;
                if(ecount>1){
                    ans++;
                }
            }
            else if(a[i]%2!=0){
                ecount=0;
                ocount++;
                if(ocount>1){
                   ans++;
                }
            }
        }
       
        // if(even>0){
        //     ans+=(even-1);
        // }
        // if(odd>0){
        //     ans+=(odd-1);
        // }
        cout<<ans<<endl;
    }
}