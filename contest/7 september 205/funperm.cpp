#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> p(n);
        for(ll i=0; i<n; i++){
            cin>>p[i];
        }
        vector<ll> q(n);
        // vector<ll> a=p;
        // sort(a.begin(), a.end());

        // ll m = a[n-1];
        if(n==2){
          for(ll i=0; i<n; i++){
            if(p[i]==1){
                q[i]=2;
            }
            else{
                q[i]=1;
            }
          }
        }
        else{
        for(ll i=0; i<n; i++){
            if(p[i]==n){
                q[i]=n;
            }
            else{
                q[i]=abs(p[i]-n);
            }
 
        }
    }
        for(ll i=0; i<n; i++){
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }
}