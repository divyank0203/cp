#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=0;
    ll i=0; 
    ll ca=0;
    ll cb=0;
    for(ll i=0; i<2*n; i++){
        if(s[i]=='A'&&cb<1){
            ca++;
        }
        else if(s[i]=='B'&&ca<1){
            cb++;
        }
        else if(s[i]=='A'&&cb>1){
            if(s.length()-i>=cb){
                ans+=cb;
                cb=0;
            }
            else{
                cb=0;
            }
            ca++;
        }
        else if(s[i]=='B'&&ca>1){
            if(s.length()-i>=ca){
                ans+=ca;
                ca=0;
            }
            else{
                ca=0;
            }
            cb++;

        }
    }
    cout<<ans<<endl;
}