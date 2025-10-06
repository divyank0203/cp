#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll> ;
using vvll = vector<vll> ;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%3==0){
            cout<<0<<endl;
        }
        else if((n+1)%3==0){
            cout<<1<<endl;
        }
        else if(n==0){
            cout<<3<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
}