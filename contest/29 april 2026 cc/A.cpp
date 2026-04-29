#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll> ;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        string s;
        cin>>n>>s;
        ll ans=0;
        for(ll i=0;i<n;i++){
            for(ll len=1;len<=n-i;len+=2){
                string sub=s.substr(i,len);
                bool cute=true;
                for(ll j=0;j<len;j++){
                    if(j%2==0){ 
                        if(sub[j]!='u'&&sub[j]!='o'){cute=false;break;}
                    } else {
                        if(sub[j]!='w'){cute=false;break;}
                    }
                }
                if(cute) ans=max(ans,len);
            }
        }
        cout<<ans<<endl;
    }
}