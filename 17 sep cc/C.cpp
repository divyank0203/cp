#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        if((n)%2!=0){
            cout<<"No"<<endl;
        }
        else{
            unordered_map<char, ll> mp;
            for(ll i=0; i<s.length(); i++){
                mp[s[i]]++;
            }
            if(mp['0']<=(n/2)&&mp['1']<=(n/2)){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}