#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll ans=0;
        bool flag = false;
        ll last = 0;
        for(ll i=0; i<n; i++){
            if(s[i]=='1'&&!flag){
                ans++;
                last = i;
                flag=true;
            }
            if(s[i]=='1'&&(i-last)>(k-1)&&flag==true){
                ans++;
                last=i;
            }
            if(s[i]=='1'){
                last=i;
            }
        }
        cout<<ans<<endl;
    }
}