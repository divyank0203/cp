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
        vector<ll> pre(n, 0);
        vector<ll> post(n, 0);
        ll two=0;
        
        for(ll i=0; i<n; i++){
            if(a[i]==2){
                two++;
                pre[i]=two;
            }

        }
        ll one=0;
        for(ll i=n-1; i>=0; i++){
            if(a[i]==2){
                one++;
                post[i]=one;
            }
        }
        
        ll ans=-1;
        for(ll i=0; i<n-1; i++){
            if(pre[i]==post[i+1]){
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}