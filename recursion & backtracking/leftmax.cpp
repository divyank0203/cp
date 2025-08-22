#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> solve(vector<ll>& a, ll n, ll m, ll i, vector<ll>& ans){
    if(i>=n){
        return ans;
    }
    m=max(m, a[i]);
    ans.push_back(m);
    return solve(a, n, m, i+1, ans);
    
}

int main(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> ans;
    ll m=a[0];
    solve(a, n, m, 0, ans);
    for(ll i=0; i<ans.size(); i++){
        if(i==ans.size()-1){
            cout<<ans[i];
        }
        else{
        cout<<ans[i]<<" ";
        }
    }
}