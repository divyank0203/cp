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
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        vector<ll> dp(n, LLONG_MAX);

        for(ll j=0; j<n; j++){
            for(ll i=0; i<=j; i++){
                set<ll> st(a.begin()+i, a.begin()+j+1);
                ll d=st.size();
                ll len = (j-i+1);
                ll cost = len-d;
                ll prev;
                if(i==0){
                    prev=0;
                }
                else{
                    prev=dp[i-1];
                }
                if(prev!=LLONG_MAX){
                    dp[j]=min(dp[j], prev+cost);
                }
            }
        }
        cout<<dp[n-1]<<endl;
       
    }
}