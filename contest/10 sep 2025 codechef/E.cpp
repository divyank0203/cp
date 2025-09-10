#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        vector<ll> ans(n);
        ans.push_back(0);
        ans.push_back(1);
        for(ll i=2; i<n+1; i++){
            if(s[i]=='1'){
                ans.push_back(i+1);
            }
            else if(s[i]=='0'&&i<n){
                
            }
        }

    }
}