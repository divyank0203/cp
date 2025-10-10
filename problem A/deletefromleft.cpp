#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    ll i=s.length()-1;
    ll j=t.length()-1;
    ll ans=0;
    while(i>=0||j>=0){
        if(s[i]!=t[j]){
            ans+=((i+1));
            ans+=((j+1));
            break;
        }
       if(i>=0){
        i--;
       }
         if(j>=0){
          j--;
         }
    }
    cout<<ans;
}