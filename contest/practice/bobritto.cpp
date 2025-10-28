#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,l,r;
        cin>>n>>m>>l>>r;
        vector<ll> ans;
        ll dif=m;
        ll l2=0;
        ll r2=0;
        while(dif){
            if(l2==l){
                break;
            }
            l2--;
            dif--;
        }
        while(dif){
            if(r2==r){
                break;
            }
            r2++;
            dif--;
        }
        ans.push_back(l2);
        ans.push_back(r2);
        cout<<ans[0]<<" "<<ans[1]<<endl;

    }
}