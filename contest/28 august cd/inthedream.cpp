#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a, b, c, d;
        cin>>a>>b>>c>>d;
        ll maxi1 = max(a, b);
        ll mini1 = min(a, b);
        ll crem = c-a;
        ll drem = d-b;
        ll maxi2 = max(crem, drem);
        ll mini2 = min(crem, drem);
        ll ans1 = (maxi1/2)+(maxi1%2);
        ll ans2 = (maxi2/2)+(maxi2%2);
        if(mini1>=(ans1-1) && mini2>=(ans2-1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}