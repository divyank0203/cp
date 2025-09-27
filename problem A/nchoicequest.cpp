#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n, a, b;
    cin>>n>>a>>b;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    ll sum=(a+b);
    for(ll i=0; i<n; i++){
        if(v[i]==sum){
            cout<<i+1<<endl;
            break;
        }
    }
}