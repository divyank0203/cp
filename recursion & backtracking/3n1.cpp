#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
ll len(ll n, ll l){
    if(n==1){
        return l;
    }
    else if(n%2==0){
        return len(n/2, l+1);
    }
    else if(n%2!=0){
        return len((3*n)+1, l+1);
    }
}
int main(){
ll n;
cin>>n;
ll ans = len(n, 1);
cout<<ans;
}