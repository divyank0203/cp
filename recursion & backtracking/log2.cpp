#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll lg(ll n, ll k){
    if(n==1){
        return k;
    }
    return lg(n/2, k+1);
}
int main(){
ll n;
cin>>n;
ll ans = lg(n, 0);
cout<<ans;
}