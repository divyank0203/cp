#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, d;
        cin>>n>>d;
        string s;
        cin>>s;
        string ans;
        bool flag = false;
        for(ll i=0; i<n; i++){
            if(s[i]<d+'0'&&flag==false&&d!=0){
                ans+=d+'0';
                flag=true;
            }
            ans+=s[i];
        }
        if(!flag){
            ans+=d+'0';
        }
        cout<<ans<<endl;
    }
}