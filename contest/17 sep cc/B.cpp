#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll h, m;
        ll to;
        to=n*k;
        h=to/60;
        m=to%60;
        cout<<h<<" "<<m<<endl;
    }
}