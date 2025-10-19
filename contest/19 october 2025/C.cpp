#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vll a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        vll b(n);
        for(ll i=0; i<n; i++){
            cin>>b[i];
        }
        ll ans=2;
        ll even=0;
        for(ll i=0; i<n; i++){
            if(a[i]%2==0){
                even++;
            }
        }
        if(even>=2){
            cout<<0<<endl;
        }
        else if(even==1){
            cout<<1<<endl;
        }
        else{
            
        }
        
        
    }
}