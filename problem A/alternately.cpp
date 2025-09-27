#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll m=0;
    ll f=0;
    bool g=true;
    for(ll i=0; i<n; i++){
        if(s[i]=='F'){
            f++;
            m=0;
            
        }
        else{
            m++;
            f=0;
        }
        if(f>1||m>1){
            g=false;
            cout<<"No"<<endl;
            break;
        }
    }
    if(g){
        cout<<"Yes"<<endl;
    }
}