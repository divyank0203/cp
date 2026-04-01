#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long> ;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vll a(n);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        ll min=a[0];
        ll max=a[n-1];
        ll count=0;
        for(ll i=0; i<n; i++){
            if(a[i]!=min && a[i]!=max){
                count++;
            }
        }
        cout<<count<<endl;
    }
}