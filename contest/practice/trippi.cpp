#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        vector<string> s(3);
        for(ll i=0; i<s.size(); i++){
            cin>>s[i];
        }
        string ans="";
        for(ll i=0; i<s.size(); i++){
            ans+=s[i][0];
        }
        cout<<ans<<endl;
    }
}