#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
bool prime(ll n){
    for(ll i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
        
    }
    return true;
}
int main(){
    ll n;
    cin>>n;
    if(n==1){
        cout<<3<<endl;
    }
    else if(n%2!=0){
        cout<<1<<endl;
    }
    
    else{
        for(ll m=1; m<=1000; m++){
            if(prime((n*m)+1)==false){
                cout<<m<<endl;
                break;
            }
        }
    }
}