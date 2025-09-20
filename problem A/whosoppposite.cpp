#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){

    ll t;
    cin>>t;
    while(t--){
        ll a, b, c;
        cin>>a>>b>>c;
        ll dif = (abs(a-b))*2;
        if(dif<a||dif<b||dif<c){
            cout<<-1<<endl;
        }
        else{
            ll ans = abs(c-(dif));
            cout<<ans<<endl;
        }
    }
}