#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    ll ans=0;
    for(ll i=1; i<=t; i++){
        ans+=(pow(-1, i)*pow(i, 3));
    }
    cout<<ans<<endl;
}