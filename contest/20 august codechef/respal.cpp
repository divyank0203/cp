#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s = "abcde";
        string ans;
        
            for(ll i=0; i<n; i++){
                if(i<=s.length()-1){
                    ans.push_back(s[i]);
                }
                else{
                    ans.push_back(s[(i)%5]);
                }
            }
            for(ll i=0; i<n; i++){
                cout<<ans[i];
            }
            cout<<endl;
            
        
        
    }
}