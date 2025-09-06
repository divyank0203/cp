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
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        vector<ll> b = a;
        sort(b.begin(), b.end());
        if(n==1||a==b){
            cout<<0<<endl;
        }
        else{
            vector<ll> c = a;

            unordered_set<ll> s;
            ll cunt=0;
            for(ll i=n-2; i>=0; i--){
                if(a[i]>a[i+1]){
                  

                    s.insert(a[i]);
                    a[i]=0;
                    
                    
                }
            }
            for(ll i=n-2; i>=0; i--){
                if(s.find(c[i+1])!=s.end()&&s.find(c[i])==s.end()){
                    s.insert(c[i]);
                }
            }
            cunt = s.size();

            cout<<cunt<<endl;
        }
    }
}