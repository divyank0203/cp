#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        vector<ll> b(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        for(ll i=0; i<n; i++){
            cin>>b[i];
        }
        ll dif = 1;
        for(ll i=0; i<n; i++){
            if(a[i]>=b[i]){
                dif+=(a[i]-b[i]);
            }
        }
        cout<<dif<<endl;
    }
}