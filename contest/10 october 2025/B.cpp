#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x, y, z;
        cin>>x>>y>>z;
    int xy = x & y;
    int yz = y & z;
    int xz = x & z;

    if (xy == yz && yz == xz) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    }
}