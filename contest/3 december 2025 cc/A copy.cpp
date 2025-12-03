#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, c;
        cin>>n>>c;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        string s;
        cin>>s;
        ll ans=0;
        ll one=0;
        for(ll i=0; i<n; i++){
            if(s[i]=='0'){
                ans+=a[i];
            }
            else{
                one+=a[i];
            }
        }
        if((ans-c)+one>ans&&ans>=c){
            cout<<ans-c+one<<endl;
        }
        else{
            cout<<ans<<endl;
        }
        
    }
}