#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n, x, y;
    cin>>n>>x>>y;
    ll one = y/x;
    ll ans = n/one;
    ll res = ans + (n%one);
    cout<<res<<endl;
}