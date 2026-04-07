#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        ll sum = accumulate(a.begin(), a.end(), 0LL);
        if(sum%2==1||(k*a.size()%2==0)){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;


    }
}