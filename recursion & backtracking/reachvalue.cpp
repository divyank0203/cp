#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool solve(ll n, ll x){
    // if(x==0){
    //     t=0;
    //     return;
    // }
    if(x==n){
        return true;
        
    }
    if(x>n){
        return false;
    }
    return solve(n, x*10) || solve(n, x*20);
    
}

int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n;
        cin>>n;
        if(solve(n, 1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

}
}