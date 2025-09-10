
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll m = (n*(n-1))/2;
        vector<ll> a(m);
        for(ll i=0; i<m; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        ll mst=0;
        for(ll i=0; i<(n-1); i++){
            mst+=a[i];
            
        }
        cout<<mst<<endl;
    }
}