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
        unordered_map<ll, ll> mp;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        bool flag = false;
        for(auto it : mp){
            if(it.second>=2){
                flag = true;
            }

        }
        if(flag==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}