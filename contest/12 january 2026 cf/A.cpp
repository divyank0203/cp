#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t; 
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n==2){
            cout<<2<<endl;
            continue;
        }
        else if(n==3){
            cout<<3<<endl;
            continue;
        }
        else if(n%2==0){
            cout<<0<<endl;
            continue;
        }
        else{
            cout<<1<<endl;
            continue;
        }
    }
}