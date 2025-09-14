#include<bits/stdc++.h>
using namespace std;
using ll = long long;
// bool order(ll n){
//     ll y=n%10;
//     ll x=0;
//     while(n>0){
//         x=n%10;
//         if(x!=y){
//             return false;
//         }
//         n/=10;

//     }
//     return true;
// }
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n; 
        cin>>n;
        ll ans=0;
        if(n<=9){
            cout<<n<<endl;
        }
        else{
            for(ll p=1; p<=n; p=(p*10)+1){
                for(ll d=1; d<=9; d++){
                    if(p*d<=n){
                        ans++;
                    }
                }
            }
            cout<<ans<<endl;
        }
    }
}