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
        bool flag=true;
        int i=0;
        int j=s.length()-1;
        while(i<=j){
            if(s[i]==s[j]&&s[i]=='?'){
                flag=false;
                break;
            }
            i++;
            j--;
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}