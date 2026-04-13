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
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end(), greater<ll>());
        bool yes=true;
        
        for(ll i=1;i<n; i++){
            
            if(a[i-1]==a[i]){
                yes=false;
                break;
            }
            
            
        }
        if(yes){
            for(ll i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            
        }
        else{
            cout<<-1;
        }
        cout<<endl;
    }
}