#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll> ;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vll a(n);
        for(ll i=0;i<n;i++) {
            cin>>a[i];
        }
        
        vll filtered;
        for(ll i=0;i<n;i++){
            if(a[i]!=k) {
                filtered.push_back(a[i]);
            }
        }
        
        ll m=filtered.size();
        bool ok=true;
        for(ll i=0;i<m/2;i++){
            if(filtered[i]!=filtered[m-1-i]){
                ok=false;
                break;
            }
        }
        if(ok){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

}