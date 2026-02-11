#include<bits/stdc++.h>
using namespace std;

using ll = long long ;
using ld = long double;
using vll = vector<ll>;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vll a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll odd=0;
        for(ll i=0; i<n; i++){
            if(a[i]%2!=0){
                odd++;
            }
        }
        if(odd%2==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
}