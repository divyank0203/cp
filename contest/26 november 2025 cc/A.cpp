#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll x,y,z;
        cin>>x>>y>>z;
        ll a=min(y, z);
        cout<<(2*a)<<endl;
    }
    
}