#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
int main(){
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll oone=0;
    ll oneo=0;
    ll zero=0;
    ll one=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='0'){
            zero++;
        }
        else{
            one++;
        }
    }
    if(zero==0||one==0){
        cout<<"Bob"<<endl;
    }
    else{
        for(ll i=0; i<n-1; i++){
            if(s[i]=='0'&&s[i+1]=='1'){
                oone++;
            }
            else if(s[i]=='1'&&s[i+1]=='0'){
                oneo++;
            }
        }
        if(oone==oneo||(oone>=1&&oneo>=1)){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
}
    
}