#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x, y, n;
        cin>>x>>y>>n;
        ll left=(x-(y*n));
        if(left<=0){
            cout<<0<<endl;
        }
        else{
            cout<<left<<endl;
        }
    }
}