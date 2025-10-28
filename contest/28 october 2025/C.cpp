#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
using pll = pair<ll, ll>;
using vvll = vector<vll>;
using vpll = vector<pll>;
#define pb push_back;

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
        ll odd=0;
        ll eve=0;
        for(ll i=0; i<n; i++){
            if(a[i]%2==0){
                eve++;
            }
            else{
                odd++;
            }
        }
        if(eve>0&&odd>0){
            sort(a.begin(), a.end());
            for(ll i=0; i<n; i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            for(ll i=0; i<n; i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        }
    }
