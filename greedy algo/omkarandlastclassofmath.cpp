#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2==0){
            cout<<(n/2)<<" "<<(n/2)<<endl;
        }
        else{
            ll a=1;
            ll b=0;
            for(ll i=2; i*i<=n; i++){
                if(n%i==0){
                    a=n/i;
                    
                    break;
                }
            }
            b=n-a;
            cout<<a<<" "<<b<<endl;
        }
    }
}