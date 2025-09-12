#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n, x;
    cin>>n>>x;
    vector<ll> l(n);
    for(ll i=0; i<n; i++){
        cin>>l[i];
    }
    vector<ll> d(n+1, 0);
    for(ll i=1; i<=n; i++){
        d[i]=d[i-1]+l[i-1];
    }
    ll bounce=0;
    for(ll i=0; i<=n; i++){
        if(d[i]<=x){
            bounce++;
        }
        else{
            break;
        }
    }
    cout<<bounce<<endl;
}