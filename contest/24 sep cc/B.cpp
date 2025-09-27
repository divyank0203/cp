#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        if(k>(n/2)){
            cout<<n-k<<endl;
        }
        else{
            cout<<k<<endl;
        }
    }
}