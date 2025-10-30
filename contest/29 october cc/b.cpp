#include<bits/stdc++.h>
using namespace std;
using ll = long long;
// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n;
//         cin>>n;
//         ll ans=(n/4);
//         if(n%4==0){
//             cout<<ans<<endl;
//         }
//         else{
//             cout<<ans+1<<endl;
//         }
//     }
// }
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a!=b){
            cout<<(a+b)<<endl;
        }
        else{
            cout<<((a*2)-1)<<endl;
        }
    }
}

