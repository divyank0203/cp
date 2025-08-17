#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool t = 0;
void express(ll i, ll x, vector<ll> &a, ll sum){
    if(i >= a.size()){
        if(sum==x){
            t=1;
        }
        return;
    }
     express(i+1, x, a, sum+a[i]);
    if(i>0){
         express(i+1, x, a, sum-a[i]);
    }
}

int main(){
ll n;
cin>>n;
ll x;
cin>>x;
vector<ll> a(n);
for(ll i=0; i<n; i++){
    cin>>a[i];
}

express(0, x, a, 0);
if(t==1){
    cout<<"YES";
}
else{
    cout<<"NO";
}
}
