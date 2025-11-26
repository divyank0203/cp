#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n==1||n==2||n==3){
            cout<<0<<endl;
        }
        else{
            ll rem=2;
            ll in=(n/2)-1;
            ll ans=0;
            while(in--){
                ans+=(n-rem-1);
                rem+=2;
            }
            cout<<ans<<endl;
        }
    }
    
}