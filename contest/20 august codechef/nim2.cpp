#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        bool flag = false;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            if(a[i]!=1){
                flag = true;
            }
        }
        if(flag){
            cout<<499122177<<endl;
        }
        else if(!flag&&n%2==0){
            cout<<0<<endl;
        }
        else if(!flag&&n&2!=0){
            cout<<1<<endl;
        }
        
    }
}