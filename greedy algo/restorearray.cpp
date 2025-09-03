#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
 ll t;
 cin>>t;
 while(t--){
    ll n;
    cin>>n;
    vector<ll> b(n-1);
    for(ll i=0; i<n-1; i++){
        cin>>b[i];
    }
    vector<ll> a(n);
    a[0]=b[0];
    a[n-1]=b[n-2];
    for(ll i=1; i<n-1; i++){
        a[i]=min(b[i-1],b[i]);
    }
    for(ll i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
 }   
}