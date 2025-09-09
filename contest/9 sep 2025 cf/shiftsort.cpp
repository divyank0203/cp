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

    
            unordered_map<char, ll> mp;
            for(ll i=0; i<n; i++){
                if(s[i]=='0'){
                    mp['0']++;
                }
            }
            ll c =  mp['0']; 
            ll ans = 0;
            for(ll i=0; i<c; i++){
                if(s[i]=='1'){
                    ans++;
                }
            }
            cout<<ans<<endl;
        
    }
}