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
        set<ll> st;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            st.insert(a[i]);
        }
        cout<<st.size()<<endl;

        }
    }
