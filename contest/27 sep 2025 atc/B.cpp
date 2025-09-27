#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    vector<ll> a(t);
    vector<ll> b(t);
    unordered_map<ll, ll> mp;
    for(ll i=0; i<t; i++){
        cin>>a[i];
        b[i]=a[i];
        if(a[i]!=-1){
            mp[a[i]]++;
        }
    }
        bool flag = false;
        for(auto it: mp){
            if(it.second>=2){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<"No"<<endl;
        }
        else{
            vector<ll> p;
            for(ll i=1; i<=t; i++){
                if(mp.find(i)==mp.end()){
                    p.push_back(i);
                }
            }
            ll j=0;
            for(ll i=0; i<t; i++){
                if(b[i]==-1){
                    b[i]=p[j];
                    j++;
                }
            }
            cout<<"Yes"<<endl;
            for(ll i=0; i<t; i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
        }
    
    
}