#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll count = 0;
        bool flag = false;
        for(ll i=0; i<s.length(); i++){
            if(s[i]=='1'){
                count++;
            }
            if(count>=k){
                flag=true;
                break;
            }
            if(s[i]=='0'){
                count=0;
            }


        }
        if(flag==true){
            cout<<"NO"<<endl;
        }
        else{
            vector<ll> perm(n, 0);
            for(ll i=0; i<n; i++){
                perm[i]=n-i;
            }
            vector<ll> ans(n, 0);
            for(ll i=0; i<s.length(); i++){
                if(s[i]=='1'){
                    ans[i]=perm.back();
                    perm.pop_back();
                }
            }
            sort(perm.begin(), perm.end(), greater<>());
            for(ll i=0; i<s.length(); i++){
                if(s[i]=='0'){
                    ans[i]=perm.back();
                    perm.pop_back();
                }
            }
            cout<<"YES"<<endl;
            for(ll i=0; i<n; i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
            
        }
    }
}