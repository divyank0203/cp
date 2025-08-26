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
        ll c=0;
        ll t=0;
        for(ll i=1; i<n; i+=2){
            if(i<(n-1)){
                if(a[i]<(a[i+1]+a[i-1])){
                    c+=((a[i+1]+a[i-1])-a[i]);
                    ll t=((a[i+1]+a[i-1])-a[i]);
                    a[i+1]-=min(t,a[i+1]);
                }
                else{
                    continue;
                }
            }
            else if(i==(n-1)){
                if(a[i]<a[i-1]){
                    c+=(a[i-1]-a[i]);
                }
                else{
                    continue;
                }
            }
        }
        cout<<c<<endl;
    }
}