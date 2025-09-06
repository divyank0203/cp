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
        ll temp = 0;

        sort(a.begin(), a.end(), greater<int>());
        ll k = a[0];
        ll ans=a[0];
        ll j=0;
        ll t2=0;
        bool flag2=false;
        bool flag=false;
        for(ll i=0; i<n; i++){
            if(flag2){
                a[i]+=temp;
            }
            flag2=false;
            if(a[i]<=k){
                temp=k;
                k--;
                
                t2++;
                j++;
                flag2=true;
                if(t2==ans){
                    flag=true;
                    break;
                }
            }
        }
        if(flag){
            cout<<ans<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}