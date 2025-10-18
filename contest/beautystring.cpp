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
        ll l, r = 0;
        vector<ll> a(n);
        bool flag = false;
        for(ll i=0; i<s.length(); i++){
            if(!flag){
                if(s[i]=='0'){
                    l=i+1;
                    flag=true;
                }
                else{
                    continue;
                }
            }
            else{
                if(s[i]>=s[i-1]&&i!=s.length()-1){
                    continue;
                }
                else if(i==s.length()-1&&s[i]>=s[i-1]){
                    r=i+1;
                    break;
                }
                else{
                    r=i;
                    break;
                }
            }

        }
        cout<<(r-l+1)<<endl;
        for(ll i=l; i<=r; i++){
            cout<<i<<" ";
            
        }
        cout<<endl;
    }
}