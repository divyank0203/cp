#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
ll vers(vector<ll>& a){
    ll inv=0;
    for(ll i=0; i<a.size(); i++){
        for(ll j=i+1; j<a.size(); j++){
            if(a[i]>a[j]){
                inv++;
            }
        }
    }
    return inv;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, q;
        cin>>n>>q;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        while(q--){
            ll l, r;
            cin>>l>>r;
            
            vector<ll> b(r-l+1);
            for(ll i=0; i<b.size(); i++){
                b[i]=a[l+i-1];
            }
            vector<ll> c=b;
            ll count = vers(b);
            
                if(count%2==(b.size()-1)%2){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            
        }
    }
}