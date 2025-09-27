#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a, b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
        }
        else if(abs(a-b)<=10){
            cout<<1<<endl;
        }
        else{
            ll dif = abs(a-b);
            ll ans = dif/10;
            if(dif%10!=0){
                ans+=1;
            }
            cout<<ans<<endl;
        }
    }
}