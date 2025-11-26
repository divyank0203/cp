#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m,k;
    cin>>n>>m>>k;
    vll a(n);
    for(auto &x: a){
        cin>>x;
    }
    vector<vll> b(m, vll(3));
    for(ll i=0; i<m; i++){
        cin>>b[i][0]>>b[i][1]>>b[i][2];
    }
    vector<vll> c(k, vll(2));
    for(ll i=0; i<k; i++){
        cin>>c[i][0]>>c[i][1];
    }
    for(ll i=0; i<k; i++){
        ll l=c[i][0];
        ll r=c[i][1];
        for(ll j=l; j<=r; j++){
            ll l1=b[j-1][0];
            ll r1=b[j-1][1];
            ll d=b[j-1][2];
            a[l1-1]+=d;
            if(r1<n){
                a[r1]-=d;
            }
            
        }
    }

    for(ll i=1; i<n; i++){
        a[i]+=a[i-1];
    }
    for(auto x: a){
        cout<<x<<" ";
    }
    cout<<endl;
}