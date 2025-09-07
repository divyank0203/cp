#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t; 
    while(t--){
        ll k, x;
        cin>>k>>x;
        ll ans=1;
        while(k--){
            x*=2;
        }
        ans=x;
        cout<<ans<<endl;
    }
}