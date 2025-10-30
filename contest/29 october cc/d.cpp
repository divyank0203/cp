#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        if(y%x==0&&y/x<=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}