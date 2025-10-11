#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main() {
    string s;
    cin>>s;
    ll n = s.length();
    string ans="";
    for(ll i=0; i<n; i++){
        if(i!=((n-1)/2)){
            ans+=s[i];
        }
    }
    cout<<ans;
}