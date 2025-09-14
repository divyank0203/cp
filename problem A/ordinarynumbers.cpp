#include<bits/stdc++.h>
using namespace std;
using ll = long long;
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
            for(ll i=1; i<=n; i++){
                if(i<=9||){
                    ans++;
                }
            }
        }
    }
}