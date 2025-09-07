#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n; 
        cin>>n;
        vector<ll> b(n);
        unordered_map<ll, ll> f;
                    ll j=0;
            ll k=1;
        for(ll i=0; i<n; i++){
            cin>>b[i];
            f[b[i]]++;
        }
        bool flag=true;
            vector<ll> a(n);
            unordered_set<ll> st;
            for(ll i=0; i<n; i++){
                st.insert(b[i]);
            }
            vector<ll> c;
            for(auto it: st){
                c.push_back(it);
            }
            sort(c.begin(), c.end());

            for(ll i=0; i<c.size(); i++){
                ll ind=c[i];
                                    if(j>n-1){
                      flag=false;
                      break;  
                    }
                while(ind-- && j<n&&k<=n){
                    a[j]=k;
                    j++;

                }
                k++;
            }
            if(flag){
            for(ll i=0; i<n; i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        

    }
}