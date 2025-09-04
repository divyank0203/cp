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

        if(n==1){
            cout<<0<<endl;
        }
        else{
            if(a[0]!=1&&a[n-1]==0){
                a[0]=1;

            }
            else if(a[0]==1&&a[n-1]!=0){
                a[n-1]=0;
            }
            
            
            else if(a[0]!=1&&a[n-1]!=0){
                a[0]=1;
            }
            else if(a[0]==1&&a[n-1]==0){
            for(ll i=0; i<n; i++){
                if(a[i]==0&&i<n/2){
                    a[i]=1;
                    break;
                }

            }
            }

            unordered_map<ll, ll> mp;
            for(ll i=0; i<n; i++){
                mp[a[i]]++;
            }

        ll c=mp[1];
        ll ans=0;
        for(ll i=n-1; i>=0; i--){
            if(a[i]==0){
                ans+=c;

            }else{
                c--;
                if(c==0){
                    break;
                }
            }
        }
        cout<<ans<<endl;
        }
    }
}