#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        for(ll i=1;; i++){
            if(i%3==0||i%10==3){
                continue;
            }
            k--;
            if(k==0){
                cout<<i<<endl;
                break;
            }
        }


    }
}