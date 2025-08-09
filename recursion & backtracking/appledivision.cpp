#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void apple(ll sum, ll i, vector<ll>& a , ll n, vector<ll>& s){
    if(i>=n){
        s.push_back(sum);
        return;
    }
    
    apple(sum+a[i], i+1, a, n, s);
    
    apple(sum, i+1, a, n, s);   
    
}
vector<ll> solve(int n, vector<ll>& s){

}
int main(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    vector<ll> s;
    apple(0, 0, a, n, s);
    ll dif=LONG_LONG_MAX;
    ll z = s.size()-1;
    for(ll i=0; i<s.size(); i++){
        dif=min(dif, abs(s[i]-s[z-i]));
    }
    cout<<dif;
}