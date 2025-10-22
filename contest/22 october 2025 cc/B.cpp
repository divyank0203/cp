#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x, y;
        cin>>x>>y;
        ll sodd=0;
        ll seven=0;
        for(ll i=x; i<=y; i++){
            if(i%x==0&&i%2==0){
                seven+=i;
            }
            else if(i%x==0&&i%2!=0){
                sodd+=i;
            }
        }
        if(seven>=sodd){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    
    
}