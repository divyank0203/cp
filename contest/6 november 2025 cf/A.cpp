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
    ll x;
    cin>>x;
    ll m1= *max_element(a.begin(), a.end());
    ll m2= *min_element(a.begin(), a.end());
    if(x<m2||x>m1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    }
}