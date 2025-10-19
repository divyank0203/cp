#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
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
    ll to=0;
    vll mpre(n, 0);
    mpre[0]=a[0];
    for(ll i=1; i<n; i++){
        mpre[i]=max((ll)a[i], (ll)mpre[i-1]);
    }
    for(ll i=0; i<n; i++){
        if(i%2!=0){
            if(a[i]<mpre[i]){
                a[i]=mpre[i];
            }
        }
        
    }
    for(ll i=0; i<n; i++){
        if(i==0&&n>=1){
            if(a[i]>=a[i+1]){
                to+=((abs(a[i]-a[i+1]))+1);
            }
        }
        else if(i%2==0&&i!=(n-1)){
            if(a[i]>=a[i-1]&&a[i]>=a[i+1]){
                to+=((max(abs(a[i]-a[i-1]), abs(a[i]-a[i+1])))+1);
            }
            else if(a[i]>=a[i-1]&&a[i]<a[i+1]){
                to+=((abs(a[i]-a[i-1]))+1);
            }
            else if(a[i]>=a[i+1]&&a[i]<a[i-1]){
                to+=((abs(a[i]-a[i+1]))+1);
            }
        }
        else if(i%2==0&&i==n-1){
            if(a[i]>=a[i-1]){
                to+=((abs(a[i]-a[i-1]))+1);
            }
        }
    }
    cout<<to<<endl;

    }
 }