#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string p = "3141592653589793238462643383279";
        ll c=0;
        for(ll i=0; i<s.length(); i++){
            if(s[i]==p[i]){
                c++;
            }
            else{
                break;
            }
        }
        cout<<c<<endl;
    }
}