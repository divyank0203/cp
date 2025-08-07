#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll fact(ll n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int main(){
ll m;
cin>>m;
cout<<fact(m);
}