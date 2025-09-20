#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(2*n);
        ll f=n;
        for(ll i=0; i<n; i++){
            a[i]=f;
            if(f==1){
                
                break;
                
            }
            f--;
            
        }
        a[n]=n;
        for(ll i=(n+1); i<2*n; i++){
            a[i]=f;
            f++;
        }
        for(ll i=0; i<2*n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
}