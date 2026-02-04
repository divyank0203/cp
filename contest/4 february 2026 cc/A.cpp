#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        ll ans=0;
        ll score=0;
        for(ll i=0; i<n; i++){
            if(a[i]>0){
                score++;
            }
            else{
                score=0;
            }
            ans=max(ans, score);
        }
        cout<<ans<<endl;
    }
}