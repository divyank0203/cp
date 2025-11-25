#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;
    cin>>n;
    vector<ll> s(n);
    for(ll i=0; i<n; i++){
        cin>>s[i];
    }
    vector<ll> a(n);
    a[0]=s[0];
    for(ll i=1; i<n; i++){
        a[i]=s[i]-s[i-1];
    }
    for(ll i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}