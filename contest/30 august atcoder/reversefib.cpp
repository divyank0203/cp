#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll rev(ll n){
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return stoll(s);
}
ll fib(ll n, ll x, ll y){
    if(n==0){
        return 0;
    }
    if(n==1){
        return x;
    }
    if(n==2){
        return y;
    }
    else{
        return rev(fib(n-1, x, y)+fib(n-2, x, y));
    }
}
int main(){
    ll x, y;
    cin>>x>>y;
    cout<<fib(10, x, y)<<endl;
}