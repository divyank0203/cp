#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
bool pal(vector<ll>& a, ll i, ll j){
    if(a[i]!=a[j]){
        return false;
    }
    else if(i>=j){
        return true;
    }
    else{
        return pal(a, i+1, j-1);
    }
}
int main(){
ll n;
cin>>n;
vector<ll> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
if(pal(a, 0, n-1)==true){
    cout<<"YES";
}
else{
    cout<<"NO";
}
}