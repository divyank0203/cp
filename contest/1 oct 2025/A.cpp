#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll ans(ll n){
    if(n==2){
        return 0;
    }
    return (n-2)+ans(n-1);

    

    
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<(n-2)<<" "<<ans(n)<<endl;
        
    }
}