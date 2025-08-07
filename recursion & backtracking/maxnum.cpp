#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll mx(ll n, vector<ll> &a){
    if(n<0){
        return a[0];
    }
    return max(a[n], mx(n-1, a));
}
int main(){
ll m;
cin>>m;
vector<ll> a(m);

for(int i=0; i<a.size(); i++){
    cin>>a[i];
}
ll j = a.size()-1;
cout<<mx(m-1, a);
}