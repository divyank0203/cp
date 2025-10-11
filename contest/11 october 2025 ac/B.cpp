#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;
    cin>>n;
    ll ans=0;
    ll c=1;
    while(n--){
        while(c!=0){
            ll temp = c%10;
            
            ans+=temp;
            c/=10;
        }
        c=ans;
    }
    cout<<ans;
}