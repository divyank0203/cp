#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n; 
        cin>>n;
        if(n%2!=0){
            cout<<-1<<endl;
        }
        else{
            ll x = 1;
            ll y = n/2;
            cout<<x<<" "<<y<<endl;
        }
    }
}