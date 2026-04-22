#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    ll t; cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        string ans = "";
        
        
        for(int k = 0; k <= n; k++){
            string temp = s;
            
            
            sort(temp.begin(), temp.begin() + k);
            
            
            sort(temp.begin() + k, temp.end());
            
            
            ans = max(ans, temp);
        }
        
        cout << ans << endl;
        
    }
}