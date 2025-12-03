#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll r, g, b;
        cin>>r>>g>>b;
        ll ans = min({r, g, b});
        ll s=(ans*10);
        r-=ans;
        g-=ans;
        b-=ans;
        s+=(r*3);
        s+=(g*3);
        s+=(b*3);
        cout<<s<<endl;
    }
}