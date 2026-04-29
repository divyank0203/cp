#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll> ;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vll a(n);
        for(ll i=0;i<n;i++) {
            cin>>a[i];
        }
        
        bool ok=true;
        bool prev=false;
        for(ll i=0;i<n-1&&ok;i++){
            if(a[i]>a[i+1]){
                if(prev){
                    ok=false;
                    break;
                }
                ll na=(a[i]+a[i+1])/2;
                ll x=a[i]-na;
                a[i+1]=a[i+1]+x;
                a[i]=na;
                if(i>0&&a[i-1]>a[i]){
                    ok=false;
                    break;
                }
                prev=true;
            } else {
                prev=false;
            }
        }
        if(ok){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}