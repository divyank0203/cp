#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, x, y;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        ll cnt0=0;
        ll cnt1=0;
        for(ll i=0; i<n; i++){
            if(s[i]=='4'){
                cnt0++;
            }
            else{
                cnt1++;
            }
        }
        ll xa=abs(x);
        ll ya=abs(y);
        ll diagonal=min((ll)cnt1, min(xa, ya));
        cnt1-=diagonal;
        // x-=diagonal;
        // y-=diagonal;
        xa-=diagonal;
        ya-=diagonal;
        ll rem=(xa+ya);
        if(rem<=(cnt0+cnt1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}