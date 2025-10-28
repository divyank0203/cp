#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a;
        cin>>a;
        string s;
        cin>>s;
        ll one=0;
        string ans="";
        for(ll i=0; i<s.length(); i++){
            if(s[i]=='1'){
                one++;
            }
            if(i!=0){
                if(s[i]=='0'){
                    ans+='+';
                }
                else if(s[i]=='1'&&one==1){
                    ans+='+';
                }
                else if(s[i]=='1'&&one==2){
                    ans+='-';
                    one=0;
                }
            }
        }
        cout<<ans<<endl;
    }
}