#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        vector<ll> a(n+1);
        ll ans=0;
        for(ll i=0; i<n; i++){
            if(s[i]=='0'){
                a[i+1]=0;
                
            }
            else{
                a[i+1]=1;
            }
        }
        for(ll i=1; i<=n; i++){
            for(ll j=i; j<=n; j+=i){
                if(a[j]==0){
                    ans+=i;
                    a[j]=-2;
                }
                else if(a[j]==1){
                    break;
                }
            }
        }
        

        
        // ll ans=0;
        // ll j=1;
        // for(ll i=0; i<a.size(); i++){
        //     while((a[i]*j)-1<n){
        //         if(s[(a[i]*j)-1]=='0'){
        //         auto it = find(a.begin(), a.end(), a[i]*j);
        //         if(it!=a.end()){
        //             a.erase(it);
        //         }
        //         ans+=a[i];
        //         cout<<ans<<" mid "<<endl;
        //         cout<<j<<" j "<<a[i]<<" vlaue "<<endl;
        //         j++;
                
        //     }
            
        //     }
        //     j=1;
        // }
        cout<<ans<<endl;
    }
}